// Function: FUN_009dd3a8
// Address: 009dd3a8
// Size: 1442 bytes
// Class: GNString
// String references:
//   "Escape sequence terminated prematurely."
//   "ASCII escape sequence terminated prematurely."
//   "Hexadecimal escape sequence terminated prematurely."
//   "Missing } in hexadecimal escape sequence."
//   "Hexadecimal escape sequence was invalid."
//   "Escape sequence did not encode a valid character."
//   "Invalid octal escape sequence."
//   "Octal escape sequence is invalid."


int FUN_009dd3a8(void)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  longlong unaff_RDI;
  longlong *plVar11;
  byte bVar12;
  uint uVar13;
  byte *pbVar14;
  byte local_48;
  byte local_47 [7];
  byte *local_40;
  byte *local_38;
  
  pbVar14 = *(byte **)(unaff_RDI + 0x80);
  pbVar10 = *(byte **)(unaff_RDI + 0x88);
  if (pbVar10 == pbVar14) {
    lVar6 = *(longlong *)(unaff_RDI + 0x78);
    pbVar14 = &local_48;
    FUN_009d5ed0();
    FUN_009d8cfc(pbVar14,(longlong)pbVar10 - lVar6);
    goto LAB_009dd4a4;
  }
  plVar1 = (longlong *)(unaff_RDI + 0x88);
  plVar11 = *(longlong **)(unaff_RDI + 8);
  lVar6 = *plVar11;
  cVar2 = *(char *)(lVar6 + 0x20 + (ulonglong)*pbVar10);
  uVar7 = 7;
  switch(cVar2) {
  case '\x11':
    lVar6 = FUN_009dcab0(8,pbVar10 + 1);
    if (lVar6 == 0) {
      lVar6 = 4;
      if ((longlong)pbVar14 - (longlong)pbVar10 < 5) {
        lVar6 = (longlong)pbVar14 - (longlong)pbVar10;
      }
      uVar7 = FUN_009dcab0(8,lVar6 + *(longlong *)(unaff_RDI + 0x88));
      if (uVar7 < 0x80) {
LAB_009dd7bd:
        bVar12 = (byte)uVar7;
        goto LAB_009dd6ff;
      }
      lVar6 = **(longlong **)(unaff_RDI + 8);
      pbVar10 = (byte *)(*(longlong *)(unaff_RDI + 0x88) + -1);
      do {
        *plVar1 = (longlong)pbVar10;
        bVar12 = *pbVar10;
        pbVar10 = pbVar10 + -1;
      } while (*(char *)(lVar6 + 0x20 + (ulonglong)bVar12) != '\f');
      lVar6 = *(longlong *)(unaff_RDI + 0x78);
      pbVar14 = &local_48;
      FUN_009d5ed0();
      FUN_009d8cfc(pbVar14,pbVar10 + (1 - lVar6));
    }
    else {
      lVar6 = **(longlong **)(unaff_RDI + 8);
      pbVar10 = (byte *)(*(longlong *)(unaff_RDI + 0x88) + -1);
      do {
        *plVar1 = (longlong)pbVar10;
        bVar12 = *pbVar10;
        pbVar10 = pbVar10 + -1;
      } while (*(char *)(lVar6 + 0x20 + (ulonglong)bVar12) != '\f');
      lVar6 = *(longlong *)(unaff_RDI + 0x78);
      pbVar14 = &local_48;
      FUN_009d5ed0();
      FUN_009d8cfc(pbVar14,pbVar10 + (1 - lVar6));
    }
    goto LAB_009dd4a4;
  case '\x12':
    uVar7 = 8;
    break;
  case '\x13':
  case '\x14':
  case '\x15':
  case '\x16':
  case '\x17':
  case '\x18':
  case '\x19':
  case '\x1a':
  case '\x1b':
  case '$':
  case '%':
    goto switchD_009dd40a_caseD_13;
  case '\x1c':
    break;
  case '\x1d':
    uVar7 = 0xc;
    break;
  case '\x1e':
    uVar7 = 10;
    break;
  case '\x1f':
    uVar7 = 0xd;
    break;
  case ' ':
    uVar7 = 9;
    break;
  case '!':
    uVar7 = 0xb;
    break;
  case '\"':
    pbVar9 = pbVar10 + 1;
    *plVar1 = (longlong)pbVar9;
    if (pbVar9 == pbVar14) {
      do {
        *plVar1 = (longlong)pbVar10;
        bVar12 = *pbVar10;
        pbVar10 = pbVar10 + -1;
      } while (*(char *)(lVar6 + 0x20 + (ulonglong)bVar12) != '\f');
      lVar6 = *(longlong *)(unaff_RDI + 0x78);
      pbVar14 = &local_48;
      FUN_009d5ed0();
      FUN_009d8cfc(pbVar14,pbVar10 + (1 - lVar6));
    }
    else if (*(char *)(lVar6 + 0x20 + (ulonglong)*pbVar9) == '\x0f') {
      *plVar1 = (longlong)(pbVar10 + 2);
      if (pbVar10 + 2 == pbVar14) {
        do {
          *plVar1 = (longlong)pbVar9;
          bVar12 = *pbVar9;
          pbVar9 = pbVar9 + -1;
        } while (*(char *)(lVar6 + 0x20 + (ulonglong)bVar12) != '\f');
        lVar6 = *(longlong *)(unaff_RDI + 0x78);
        pbVar14 = &local_48;
        FUN_009d5ed0();
        FUN_009d8cfc(pbVar14,pbVar9 + (1 - lVar6));
      }
      else {
        uVar7 = FUN_009dcab0(0x10,pbVar14);
        pbVar10 = *(byte **)(unaff_RDI + 0x88);
        if ((uVar7 < 0x80) && (pbVar10 != *(byte **)(unaff_RDI + 0x80))) {
          lVar6 = **(longlong **)(unaff_RDI + 8);
          if (*(char *)(lVar6 + 0x20 + (ulonglong)*pbVar10) == '\x10') break;
        }
        else {
          lVar6 = **(longlong **)(unaff_RDI + 8);
        }
        pbVar10 = pbVar10 + -1;
        do {
          *plVar1 = (longlong)pbVar10;
          bVar12 = *pbVar10;
          pbVar10 = pbVar10 + -1;
        } while (*(char *)(lVar6 + 0x20 + (ulonglong)bVar12) != '\f');
        lVar6 = *(longlong *)(unaff_RDI + 0x78);
        pbVar14 = &local_48;
        FUN_009d5ed0();
        FUN_009d8cfc(pbVar14,pbVar10 + (1 - lVar6));
      }
    }
    else {
      lVar6 = 2;
      if ((longlong)pbVar14 - (longlong)pbVar9 < 3) {
        lVar6 = (longlong)pbVar14 - (longlong)pbVar9;
      }
      uVar7 = FUN_009dcab0(0x10,pbVar9 + lVar6);
      if (uVar7 < 0x100) goto LAB_009dd7bd;
      lVar6 = **(longlong **)(unaff_RDI + 8);
      pbVar10 = (byte *)(*(longlong *)(unaff_RDI + 0x88) + -1);
      do {
        *plVar1 = (longlong)pbVar10;
        bVar12 = *pbVar10;
        pbVar10 = pbVar10 + -1;
      } while (*(char *)(lVar6 + 0x20 + (ulonglong)bVar12) != '\f');
      lVar6 = *(longlong *)(unaff_RDI + 0x78);
      pbVar14 = &local_48;
      FUN_009d5ed0();
      FUN_009d8cfc(pbVar14,pbVar10 + (1 - lVar6));
    }
    goto LAB_009dd4a4;
  case '#':
    pbVar9 = pbVar10 + 1;
    *plVar1 = (longlong)pbVar9;
    if (pbVar9 != pbVar14) {
      uVar13 = (uint)(char)*pbVar9;
      uVar5 = uVar13 + 0x1f;
      if (-1 < (char)*pbVar9) {
        uVar5 = uVar13;
      }
      uVar7 = (ulonglong)(uVar13 - (uVar5 & 0xe0));
      pbVar10 = pbVar9;
      break;
    }
    do {
      *plVar1 = (longlong)pbVar10;
      bVar12 = *pbVar10;
      pbVar10 = pbVar10 + -1;
    } while (*(char *)(lVar6 + 0x20 + (ulonglong)bVar12) != '\f');
    lVar6 = *(longlong *)(unaff_RDI + 0x78);
    pbVar14 = &local_48;
    FUN_009d5ed0();
    FUN_009d8cfc(pbVar14,pbVar10 + (1 - lVar6));
LAB_009dd4a4:
    if ((local_48 & 1) != 0) {
      operator_delete(pbVar14);
    }
LAB_009dd4b3:
    bVar12 = 0;
    goto LAB_009dd6ff;
  case '&':
    uVar7 = 0x1b;
    break;
  default:
    if (cVar2 == '8') {
      pbVar9 = pbVar10 + 1;
      *plVar1 = (longlong)pbVar9;
      if (pbVar9 != pbVar14) {
        if (*(char *)(lVar6 + 0x20 + (ulonglong)*pbVar9) == '\x0f') {
          pbVar9 = pbVar10 + 2;
LAB_009dd4e2:
          pbVar8 = pbVar9;
          *plVar1 = (longlong)pbVar8;
          if (pbVar14 != pbVar8) goto code_r0x009dd4ee;
          pbVar14 = pbVar14 + -1;
          do {
            *plVar1 = (longlong)pbVar14;
            uVar7 = (ulonglong)*pbVar14;
            pbVar14 = pbVar14 + -1;
          } while (*(char *)(lVar6 + 0x20 + uVar7) != '\f');
          pbVar9 = pbVar14 + (1 - *(longlong *)(unaff_RDI + 0x78));
          goto LAB_009dd940;
        }
        goto LAB_009dd91b;
      }
      do {
        *plVar1 = (longlong)pbVar10;
        uVar7 = (ulonglong)*pbVar10;
        pbVar10 = pbVar10 + -1;
      } while (*(char *)(lVar6 + 0x20 + uVar7) != '\f');
      pbVar9 = pbVar10 + (1 - *(longlong *)(unaff_RDI + 0x78));
      goto LAB_009dd940;
    }
    goto switchD_009dd40a_caseD_13;
  }
switchD_009dd40a_caseD_1c:
  bVar12 = (byte)uVar7;
  *plVar1 = (longlong)(pbVar10 + 1);
LAB_009dd6ff:
  return (int)(char)bVar12;
code_r0x009dd4ee:
  pbVar9 = pbVar8 + 1;
  if (*(char *)(lVar6 + 0x20 + (ulonglong)*pbVar8) == '\x10') goto code_r0x009dd4fb;
  goto LAB_009dd4e2;
code_r0x009dd4fb:
  *plVar1 = (longlong)(pbVar8 + 1);
  bVar12 = (byte)&local_48;
  FUN_009df20a(pbVar8,pbVar10 + 2);
  bVar4 = local_48 & 1;
  if (bVar4 == 0) {
    local_40 = (byte *)(ulonglong)(local_48 >> 1);
  }
  if (local_40 == (byte *)((longlong)&MACH_HEADER.magic + 1)) {
    local_40 = local_38;
    if (bVar4 == 0) {
      local_40 = local_47;
    }
    bVar12 = *local_40;
    bVar3 = true;
  }
  else if (local_40 == (byte *)0x0) {
    lVar6 = **(longlong **)(unaff_RDI + 8);
    local_40 = (byte *)(*(longlong *)(unaff_RDI + 0x88) + -1);
    do {
      *plVar1 = (longlong)local_40;
      bVar12 = *local_40;
      local_40 = local_40 + -1;
    } while (*(char *)(lVar6 + 0x20 + (ulonglong)bVar12) != '\f');
    local_40 = local_40 + (1 - *(longlong *)(unaff_RDI + 0x78));
    FUN_009d86be(local_40,local_40);
    bVar4 = local_48 & 1;
    bVar3 = true;
    bVar12 = 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar4 != 0) {
    operator_delete(local_40);
  }
  if (bVar3) goto LAB_009dd6ff;
  plVar11 = *(longlong **)(unaff_RDI + 8);
  pbVar9 = *(byte **)(unaff_RDI + 0x88);
LAB_009dd91b:
  lVar6 = *plVar11;
  pbVar9 = pbVar9 + -1;
  do {
    *plVar1 = (longlong)pbVar9;
    uVar7 = (ulonglong)*pbVar9;
    pbVar9 = pbVar9 + -1;
  } while (*(char *)(lVar6 + 0x20 + uVar7) != '\f');
  pbVar9 = pbVar9 + (1 - *(longlong *)(unaff_RDI + 0x78));
LAB_009dd940:
  FUN_009d86be(uVar7,pbVar9);
  goto LAB_009dd4b3;
switchD_009dd40a_caseD_13:
  uVar7 = (ulonglong)*pbVar10;
  goto switchD_009dd40a_caseD_1c;
}


