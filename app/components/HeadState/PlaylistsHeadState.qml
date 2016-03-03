/*
 * Copyright (C) 2015
 *      Andrew Hayzen <ahayzen@gmail.com>
 *      Victor Thompson <victor.thompson@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

import QtQuick 2.4
import Ubuntu.Components 1.3
import Ubuntu.Components.Popups 1.3


PageHeadState {
    name: "default"
    head: thisPage.head
    actions: [
        Action {
            id: newPlaylistAction
            objectName: "newPlaylistButton"
            iconName: "add"
            onTriggered: {
                customdebug("New playlist.")
                thisPage.currentDialog = PopupUtils.open(Qt.resolvedUrl("../Dialog/DialogNewPlaylist.qml"), mainView)
            }
        },
        Action {
            id: searchAction
            iconName: "search"
            onTriggered: thisPage.state = "search"
        }
    ]

    property alias newPlaylistEnabled: newPlaylistAction.enabled
    property alias searchEnabled: searchAction.enabled
    property Page thisPage
}