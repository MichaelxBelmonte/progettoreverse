// Function: FUN_018721a0
// Address: 018721a0
// Size: 1354 bytes
// Class: Unknown


void FUN_018721a0(void)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  void *pvVar11;
  undefined8 uVar12;
  byte bVar13;
  pthread_key_t pVar14;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  bool bVar16;
  int iVar17;
  bool bVar18;
  longlong local_70;
  char local_68 [8];
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  ulonglong uVar15;
  
  lVar9 = *unaff_RSI;
  while( true ) {
    if (*(int *)(lVar9 + 0xc) == 0) {
      return;
    }
    lVar9 = *(longlong *)(**(longlong **)(lVar9 + 0x10) + 0x20);
    if ((*(int *)(lVar9 + 0xc) != 0) && (*(longlong *)(**(longlong **)(lVar9 + 0x10) + 0x10) != 0))
    break;
    FUN_00d23620();
    lVar9 = *unaff_RSI;
  }
  while( true ) {
    FUN_00d23340();
    local_38[0] = local_68[0];
    pcVar7 = local_68;
    if (local_68[0] == '\0') {
      pcVar7 = local_38;
    }
    *pcVar7 = '\0';
    if ((local_68[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (*(int *)(*(longlong *)(local_70 + 0x20) + 0xc) == 0) {
      bVar18 = true;
    }
    else {
      FUN_00d23340();
      local_40[0] = local_68[0];
      pcVar7 = local_68;
      if (local_68[0] == '\0') {
        pcVar7 = local_40;
      }
      *pcVar7 = '\0';
      if ((local_68[0] != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      bVar18 = *(longlong *)(**(longlong **)(*(longlong *)(local_70 + 0x20) + 0x10) + 0x10) == 0;
      if ((local_40[0] != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    lVar9 = *unaff_RSI;
    if (!bVar18) break;
    FUN_00d23740();
    if (*(int *)(*unaff_RSI + 0xc) == 0) {
      return;
    }
  }
  if (*(int *)(lVar9 + 0xc) < 2) {
    return;
  }
  iVar17 = 0;
  bVar18 = false;
  do {
    lVar9 = *(longlong *)(lVar9 + 0x10);
    lVar2 = *(longlong *)(lVar9 + (longlong)iVar17 * 8);
    if (lVar2 != 0) {
      FUN_00d50b00();
      lVar9 = *(longlong *)(*unaff_RSI + 0x10);
    }
    lVar9 = *(longlong *)(lVar9 + 8 + (longlong)iVar17 * 8);
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    bVar16 = true;
    if ((*(int *)(*(longlong *)(lVar2 + 0x20) + 0xc) == 0) ||
       (lVar10 = *(longlong *)(**(longlong **)(*(longlong *)(lVar2 + 0x20) + 0x10) + 0x10),
       lVar10 == 0)) {
      bVar4 = true;
      lVar10 = 0;
      lVar8 = *(longlong *)(lVar9 + 0x20);
      if (*(int *)(lVar8 + 0xc) != 0) goto LAB_018723a4;
LAB_018723d0:
      lVar8 = 0;
    }
    else {
      FUN_00d50b00();
      bVar4 = false;
      lVar8 = *(longlong *)(lVar9 + 0x20);
      if (*(int *)(lVar8 + 0xc) == 0) goto LAB_018723d0;
LAB_018723a4:
      lVar8 = *(longlong *)(**(longlong **)(lVar8 + 0x10) + 0x10);
      if (lVar8 == 0) goto LAB_018723d0;
      FUN_00d50b00();
      bVar16 = false;
    }
    if (lVar8 == 0) {
      bVar18 = true;
    }
    if (lVar10 == 0 && lVar8 == 0) {
      *(undefined8 *)(lVar2 + 0x14) = *(undefined8 *)(lVar9 + 0x14);
      FUN_00d23620();
      iVar17 = iVar17 + -1;
    }
    if (!bVar16 && lVar8 != 0) {
      FUN_00d50b20();
    }
    if (!bVar4 && lVar10 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    FUN_00d50b20();
    iVar17 = iVar17 + 1;
    lVar9 = *unaff_RSI;
    uVar1 = *(int *)(lVar9 + 0xc) - 1;
    uVar15 = (ulonglong)uVar1;
  } while (iVar17 < (int)uVar1);
  if ((bVar18) && (1 < *(int *)(lVar9 + 0xc))) {
    iVar17 = 0;
    do {
      pVar14 = (pthread_key_t)uVar15;
      lVar9 = *(longlong *)(lVar9 + 0x10);
      lVar2 = *(longlong *)(lVar9 + (longlong)iVar17 * 8);
      if (lVar2 != 0) {
        FUN_00d50b00();
        lVar9 = *(longlong *)(*unaff_RSI + 0x10);
      }
      lVar9 = *(longlong *)(lVar9 + 8 + (longlong)iVar17 * 8);
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      if ((*(int *)(*(longlong *)(lVar2 + 0x20) + 0xc) == 0) ||
         (local_48 = *(longlong *)(**(longlong **)(*(longlong *)(lVar2 + 0x20) + 0x10) + 0x10),
         local_48 == 0)) {
        local_48 = 0;
        bVar13 = 1;
        lVar10 = *(longlong *)(lVar9 + 0x20);
        if (*(int *)(lVar10 + 0xc) != 0) goto LAB_01872528;
LAB_01872550:
        bVar3 = 1;
        lVar10 = 0;
      }
      else {
        FUN_00d50b00();
        bVar13 = 0;
        lVar10 = *(longlong *)(lVar9 + 0x20);
        if (*(int *)(lVar10 + 0xc) == 0) goto LAB_01872550;
LAB_01872528:
        lVar10 = *(longlong *)(**(longlong **)(lVar10 + 0x10) + 0x10);
        if (lVar10 == 0) goto LAB_01872550;
        FUN_00d50b00();
        bVar3 = 0;
      }
      if ((local_48 != 0) && (lVar10 == 0)) {
        if (*(longlong *)(unaff_RDI + 0x20) == 0) {
          iVar5 = 4;
        }
        else {
          lVar8 = *(longlong *)(lVar9 + 0xc);
          FUN_00e7b820();
          pvVar11 = _pthread_getspecific(pVar14);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          pVar14 = 0;
          uVar12 = FUN_016c4630(0,1);
          pvVar11 = _pthread_getspecific(pVar14);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_016c47d0(0,uVar12);
          iVar5 = FUN_0123ffa0();
          if ((local_68[0] != '\0') && (lVar8 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_00e7b970();
        iVar6 = FUN_00e7cea0();
        if (iVar6 <= iVar5) {
          *(undefined8 *)(lVar2 + 0x14) = *(undefined8 *)(lVar9 + 0x14);
          FUN_00d23620();
          iVar17 = iVar17 + -1;
        }
      }
      if (!(bool)(bVar3 | lVar10 == 0)) {
        FUN_00d50b20();
      }
      bVar13 = bVar13 | local_48 == 0;
      uVar15 = (ulonglong)bVar13;
      if (bVar13 == 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      FUN_00d50b20();
      iVar17 = iVar17 + 1;
      lVar9 = *unaff_RSI;
    } while (iVar17 < *(int *)(lVar9 + 0xc) + -1);
  }
  return;
}


