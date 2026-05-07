// Function: FUN_012d6050
// Address: 012d6050
// Size: 1249 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x012d6504) */
/* WARNING: Removing unreachable block (ram,0x012d64df) */
/* WARNING: Removing unreachable block (ram,0x012d6509) */

void FUN_012d6050(pthread_key_t param_1,void *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  void *pvVar8;
  char *pcVar9;
  longlong lVar10;
  longlong unaff_RDI;
  longlong lVar11;
  bool bVar12;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  pthread_key_t local_48;
  longlong local_40;
  char local_38 [8];
  
  *(undefined1 *)(unaff_RDI + 0x1a0) = 0;
  lVar2 = *(longlong *)(unaff_RDI + 0x170);
  if (lVar2 == 0) {
    return;
  }
  local_48 = param_1;
  FUN_00d50b00();
  lVar10 = *(longlong *)(lVar2 + 0x10);
  lVar11 = *(longlong *)(unaff_RDI + 0xf8);
  if (lVar10 == lVar11) {
    plVar3 = *(longlong **)(lVar2 + 0x18);
    lVar10 = *(longlong *)(unaff_RDI + 0x178);
    if (lVar10 != 0) {
      FUN_00d50b00();
    }
    cVar5 = (**(code **)(*plVar3 + 0x50))();
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    if (cVar5 != '\0') goto LAB_012d6181;
    lVar10 = *(longlong *)(lVar2 + 0x10);
    lVar11 = *(longlong *)(unaff_RDI + 0xf8);
    if (lVar11 != lVar10) goto LAB_012d60ad;
  }
  else if (lVar11 != lVar10) {
LAB_012d60ad:
    if (lVar10 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0xf8) = lVar10;
    if (lVar11 != 0) {
      FUN_00d50b20();
    }
  }
  lVar10 = *(longlong *)(lVar2 + 0x18);
  if (lVar10 != 0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  local_40 = lVar10;
  FUN_00d243f0();
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
LAB_012d6181:
  local_40 = FUN_00e313b0();
  do {
    pvVar8 = (void *)0x0;
    pVar7 = 1;
    cVar5 = FUN_00e31450();
    lVar10 = local_40;
  } while (cVar5 == '\0');
  if ((*(longlong *)(unaff_RDI + 0x110) != 0) &&
     (*(longlong *)(*(longlong *)(unaff_RDI + 0x110) + 0x100) != 0)) {
    pvVar8 = (void *)0x0;
    FUN_00c8e340();
  }
  if (*(longlong *)(unaff_RDI + 0xf8) != 0) {
    if (*(longlong *)(lVar2 + 0x20) == 0) {
      bVar12 = false;
    }
    else {
      pvVar6 = _pthread_getspecific(pVar7);
      bVar12 = pvVar6 == (void *)0x0;
      if (bVar12) {
        FUN_00cbc280();
        _pthread_setspecific(pVar7,pvVar8);
      }
      *(undefined1 *)(unaff_RDI + 0x19f) = 1;
    }
    lVar11 = *(longlong *)(unaff_RDI + 0x130);
    if (lVar11 != 0) {
      FUN_00d50b00();
    }
    FUN_012d4f10();
    if (lVar11 != 0) {
      FUN_00d50b20();
    }
    if (lVar10 != 0) {
      FUN_00ca1380();
      lVar11 = local_40;
      pcVar9 = &local_58;
      if (local_38[0] != '\0') {
        pcVar9 = local_38;
      }
      local_58 = local_38[0];
      *pcVar9 = '\0';
      if ((local_38[0] != '\0') && (lVar11 != 0)) {
        FUN_00d50b20();
      }
      iVar1 = *(int *)(lVar11 + 0xc);
      if ((local_58 != '\0') && (lVar11 != 0)) {
        FUN_00d50b20();
      }
      if (iVar1 != 0) {
        FUN_012d21a0();
        lVar11 = CONCAT71(uStack_57,local_58);
        if (local_50 == '\0') {
          if (lVar11 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_38[0] = '\0';
        local_40 = lVar11;
        FUN_00d23480();
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar11 != 0) {
          FUN_00d50b20();
        }
      }
    }
    lVar11 = *(longlong *)(unaff_RDI + 0x130);
    if (*(int *)(lVar11 + 0xc) != 0) {
      FUN_00d50b00();
      FUN_012d6a40();
      lVar4 = CONCAT71(uStack_57,local_58);
      if (local_50 == '\0') {
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_38[0] = '\0';
      local_40 = lVar4;
      cVar5 = FUN_00e325c0();
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
      if (lVar11 != 0) {
        FUN_00d50b20();
      }
      if (cVar5 != '\0') {
        FUN_00d216c0();
      }
    }
    FUN_012d6b30();
    FUN_012d4010();
    FUN_012d3a20();
    pVar7 = local_48;
    FUN_012d70d0();
    if ((*(longlong *)(lVar2 + 0x20) != 0) && (*(undefined1 *)(unaff_RDI + 0x19f) = 0, bVar12)) {
      _pthread_setspecific(pVar7,param_2);
      FUN_00cbc2a0();
    }
  }
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


