/***************************************************************************
 *   Copyright (C) 2009 by Jally   *
 *   jallyx@163.com   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#include "engine/PhraseEngine.h"

int main(int argc, char *argv[])
{
// 	GSList *tlist, *list;
// 	PinyinEngine pye;
// 	PhraseData *phrdt;
// 	guint length, count;
// 	gunichar2 *data;
// 	glong dtlen;
// 	char ch;
//
// 	pye.InitSysEngineUnits("mb.txt");
// 	pye.InitUserEngineUnit("user.mb");
//
// 	while (ch = getchar()) {
// 		if (isalpha(ch)) {
// 			pye.InsertPinyinKey(ch);
// 			pye.GetPagePhrase(&list, &length);
// 			count = 1;
// 			tlist = list;
// 			while (tlist) {
// 				phrdt = (PhraseData *)tlist->data;
// 				printf("%ld.%s ", count, g_utf16_to_utf8(phrdt->data,
// 						 phrdt->dtlen, NULL, NULL, NULL));
// 				count++;
// 				tlist = g_slist_next(tlist);
// 			}
// 			pye.GetPreeditText(&data, &dtlen);
// 			printf("\nPreedit: %s\n", g_utf16_to_utf8(data, dtlen, NULL, NULL, NULL));
// 			pye.GetAuxiliaryText(&data, &dtlen);
// 			printf("\nAuxiliary: %s\n", g_utf16_to_utf8(data, dtlen, NULL, NULL, NULL));
// 		} else if (isdigit(ch)) {
// 			if ( (tlist = g_slist_nth(list, ch - '1'))) {
// 				phrdt = (PhraseData *)tlist->data;
// 				pye.SelectCachePhrase(phrdt);
// 			}
// 			if (pye.IsFinishInquirePhrase()) {
// 				pye.GetCommitText(&data, &dtlen);
// 				printf("\nCommit: %s\n", g_utf16_to_utf8(data, dtlen, NULL, NULL, NULL));
// 				pye.FeedbackSelectedPhrase();
// 				pye.FinishInquirePhrase();
// 				pye.BakUserPhrase();
// 			} else {
// 				pye.GetPagePhrase(&list, &length);
// 				count = 1;
// 				tlist = list;
// 				while (tlist) {
// 					phrdt = (PhraseData *)tlist->data;
// 					printf("%ld.%s ", count, g_utf16_to_utf8(phrdt->data,
// 					       phrdt->dtlen, NULL, NULL, NULL));
// 					count++;
// 					tlist = g_slist_next(tlist);
// 				}
// 				pye.GetPreeditText(&data, &dtlen);
// 				printf("\nPreedit: %s\n", g_utf16_to_utf8(data, dtlen, NULL, NULL, NULL));
// 				pye.GetAuxiliaryText(&data, &dtlen);
// 				printf("\nAuxiliary: %s\n", g_utf16_to_utf8(data, dtlen, NULL, NULL, NULL));
// 			}
// 		} else if (ch == '=') {
// 			pye.GetPagePhrase(&list, &length);
// 			count = 1;
// 			tlist = list;
// 			while (tlist) {
// 				phrdt = (PhraseData *)tlist->data;
// 				printf("%ld.%s ", count, g_utf16_to_utf8(phrdt->data,
// 						 phrdt->dtlen, NULL, NULL, NULL));
// 				count++;
// 				tlist = g_slist_next(tlist);
// 			}
// 			pye.GetPreeditText(&data, &dtlen);
// 			printf("\nPreedit: %s\n", g_utf16_to_utf8(data, dtlen, NULL, NULL, NULL));
// 			pye.GetAuxiliaryText(&data, &dtlen);
// 			printf("\nAuxiliary: %s\n", g_utf16_to_utf8(data, dtlen, NULL, NULL, NULL));
// 		}
// 	}

	return 0;
}

