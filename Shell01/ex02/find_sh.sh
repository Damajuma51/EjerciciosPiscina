# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_sh.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: masantos <masantos@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 19:25:55 by masantos          #+#    #+#              #
#    Updated: 2022/02/17 13:06:36 by masantos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

find . -type f -name "*.sh" -exec basename {} \; | rev | cut -c 4- | rev
