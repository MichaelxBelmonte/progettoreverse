// Function: FUN_00acb370
// Address: 00acb370
// Size: 783 bytes
// Class: GNString


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00acb370(void)

{
  byte bVar1;
  string sVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  string *psVar6;
  string *psVar7;
  string *psVar8;
  ulonglong uVar9;
  string *psVar10;
  string *psVar11;
  byte *unaff_RDI;
  ulonglong uVar12;
  ulong uVar13;
  string *in_R9;
  byte bVar14;
  allocator *unaff_R14;
  byte local_38;
  
  uVar13 = (ulong)in_R9;
  bVar1 = *unaff_RDI;
  if ((bVar1 & 1) == 0) {
    uVar12 = (ulonglong)(bVar1 >> 1);
  }
  else {
    uVar12 = *(ulonglong *)(unaff_RDI + 8);
  }
  psVar7 = (string *)(*(longlong *)(unaff_RDI + 0x20) + uVar12);
  *(string **)(unaff_RDI + 0x20) = psVar7;
  pbVar3 = *(byte **)(unaff_RDI + 0x18);
  bVar14 = *pbVar3;
  if ((bVar14 & 1) == 0) {
    psVar8 = (string *)(ulonglong)(bVar14 >> 1);
  }
  else {
    psVar8 = *(string **)(pbVar3 + 8);
  }
  if (psVar7 == psVar8) {
    if ((bVar1 & 1) == 0) {
      unaff_RDI[0] = 0;
      unaff_RDI[1] = 0;
      return;
    }
    **(undefined1 **)(unaff_RDI + 0x10) = 0;
    unaff_RDI[8] = 0;
    unaff_RDI[9] = 0;
    unaff_RDI[10] = 0;
    unaff_RDI[0xb] = 0;
    unaff_RDI[0xc] = 0;
    unaff_RDI[0xd] = 0;
    unaff_RDI[0xe] = 0;
    unaff_RDI[0xf] = 0;
    return;
  }
  if (uVar12 < 3) {
LAB_00acb427:
    psVar8 = (string *)0x0;
    if ((bVar14 & 1) == 0) goto LAB_00acb42f;
LAB_00acb417:
    sVar2 = psVar7[*(longlong *)(pbVar3 + 0x10)];
  }
  else {
    if ((bVar1 & 1) == 0) {
      pbVar5 = unaff_RDI + 1;
      if (*pbVar5 == 0x2f) goto LAB_00acb404;
      goto LAB_00acb427;
    }
    pbVar5 = *(byte **)(unaff_RDI + 0x10);
    if (*pbVar5 != 0x2f) goto LAB_00acb427;
LAB_00acb404:
    if (pbVar5[1] != 0x2f) goto LAB_00acb427;
    psVar8 = (string *)CONCAT71((int7)((ulonglong)pbVar5 >> 8),pbVar5[2] != 0x2f);
    if ((bVar14 & 1) != 0) goto LAB_00acb417;
LAB_00acb42f:
    sVar2 = *(string *)(pbVar3 + 1 + (longlong)psVar7);
  }
  if (sVar2 == (string)0x2f) {
    if ((char)psVar8 != '\0') {
      std::string::operator=(psVar8,(char)psVar7);
      return;
    }
    psVar8 = (string *)(pbVar3 + 1);
    if ((bVar14 & 1) == 0) goto LAB_00acb480;
    while (psVar7 != *(string **)(pbVar3 + 8)) {
      while( true ) {
        psVar6 = psVar8;
        if ((bVar14 & 1) != 0) {
          psVar6 = *(string **)(pbVar3 + 0x10);
        }
        if (psVar6[(longlong)psVar7] != (string)0x2f) goto LAB_00acb4b2;
        psVar7 = psVar7 + 1;
        *(string **)(unaff_RDI + 0x20) = psVar7;
        bVar14 = *pbVar3;
        if ((bVar14 & 1) != 0) break;
LAB_00acb480:
        if (psVar7 == (string *)(ulonglong)(bVar14 >> 1)) goto LAB_00acb4b2;
      }
    }
LAB_00acb4b2:
    if ((bVar14 & 1) == 0) {
      psVar6 = (string *)(ulonglong)(bVar14 >> 1);
    }
    else {
      psVar6 = *(string **)(pbVar3 + 8);
    }
    if (psVar6 == psVar7) {
      if ((bVar14 & 1) != 0) {
        psVar8 = *(string **)(pbVar3 + 0x10);
      }
      psVar6 = psVar7;
      do {
        if (psVar6 == (string *)((longlong)&MACH_HEADER.magic + 1U)) goto LAB_00acb57f;
        psVar11 = psVar8 + -2 + (longlong)psVar6;
        psVar6 = psVar6 + -1;
      } while (*psVar11 == (string)0x2f);
      if ((((string *)((longlong)&MACH_HEADER.magic + 3) <= psVar6) && (*psVar8 == (string)0x2f)) &&
         (psVar8[1] == (string)0x2f)) {
        if ((bVar14 & 1) == 0) {
          uVar12 = (ulonglong)(bVar14 >> 1);
        }
        else {
          uVar12 = *(ulonglong *)(pbVar3 + 8);
        }
        psVar11 = (string *)0xffffffffffffffff;
        if (2 < uVar12) {
          in_R9 = psVar8 + uVar12;
          uVar9 = 2;
          do {
            if (psVar8[uVar9] == (string)0x2f) {
              psVar10 = psVar8 + uVar9;
              break;
            }
            uVar9 = uVar9 + 1;
            psVar10 = in_R9;
          } while (uVar12 != uVar9);
          psVar11 = (string *)0xffffffffffffffff;
          if (psVar10 != in_R9) {
            psVar11 = psVar10 + -(longlong)psVar8;
          }
        }
        uVar13 = (ulong)in_R9;
        if (psVar11 == psVar6) goto LAB_00acb57f;
      }
      *(string **)(unaff_RDI + 0x20) = psVar7 + -1;
      if ((DAT_028a0bb8 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        _DAT_028a0ba0 = 0x2e02;
        DAT_028a0ba2 = 0;
        psVar7 = (string *)0x0;
        ___cxa_atexit();
        ___cxa_guard_release();
      }
      std::string::operator=(psVar8,psVar7);
      return;
    }
  }
LAB_00acb57f:
  if ((bVar14 & 1) == 0) {
    pbVar5 = pbVar3 + 1;
    psVar8 = (string *)(ulonglong)(bVar14 >> 1);
  }
  else {
    psVar8 = *(string **)(pbVar3 + 8);
    pbVar5 = *(byte **)(pbVar3 + 0x10);
  }
  psVar6 = psVar7;
  if (psVar7 < psVar8) {
    do {
      if (pbVar5[(longlong)psVar6] == 0x2f) {
        if ((psVar8 != psVar6) && (psVar6 != (string *)0xffffffffffffffff)) goto LAB_00acb5de;
        break;
      }
      psVar6 = psVar6 + 1;
    } while (psVar8 != psVar6);
  }
  if ((bVar14 & 1) == 0) {
    psVar6 = (string *)(ulonglong)(bVar14 >> 1);
  }
  else {
    psVar6 = *(string **)(pbVar3 + 8);
  }
LAB_00acb5de:
  psVar6 = psVar6 + -(longlong)psVar7;
  std::string::string(psVar6,psVar7,(ulong)pbVar3,uVar13,unaff_R14);
  std::string::operator=(psVar6,psVar7);
  if ((local_38 & 1) != 0) {
    operator_delete(psVar6);
  }
  return;
}


