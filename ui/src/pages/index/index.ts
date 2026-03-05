// Copyright (C) 2025 Template Author
//
// This file is part of miniapp-template.
//
// miniapp-template is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// miniapp-template is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with miniapp-template.  If not, see <https://www.gnu.org/licenses/>.

import { defineComponent } from 'vue';

export type indexOptions = {};

const index = defineComponent({
    data() {
        return {
            $page: {} as FalconPage<indexOptions>,
        };
    },

    methods: {
        // TODO: Add your page methods here
    }
});

export default index;
