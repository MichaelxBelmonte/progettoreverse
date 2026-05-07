// Function: FUN_019ac7b0
// Address: 019ac7b0
// Size: 1111 bytes
// Class: MUEditorElementView


longlong * FUN_019ac7b0(double param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  void *pvVar4;
  undefined8 uVar5;
  pthread_key_t in_ECX;
  pthread_key_t pVar6;
  longlong lVar7;
  char *pcVar8;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  undefined1 local_90 [4];
  int iStack_8c;
  undefined1 local_88 [4];
  int iStack_84;
  longlong local_50;
  char local_48 [8];
  longlong local_40;
  char local_38 [8];
  
  lVar9 = *(longlong *)(unaff_RSI + 0x50);
  if (lVar9 != 0) {
    if ((*(double *)(unaff_RSI + 0x58) <= param_1) && (param_1 < *(double *)(unaff_RSI + 0x60))) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      FUN_00d50b00();
      *unaff_RDI = lVar9;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      return unaff_RDI;
    }
    *(undefined8 *)(unaff_RSI + 0x50) = 0;
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RSI + 0x40) + 0xa20))();
  if (local_48[0] == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_019ac865;
    }
  }
  else if (local_50 != 0) {
LAB_019ac865:
    (**(code **)(**(longlong **)(unaff_RSI + 0x40) + 0xa18))();
    if (local_50 == 0) {
      lVar9 = 0;
      bVar3 = false;
    }
    else {
      bVar3 = true;
      lVar9 = local_50;
      if (((local_48[0] == '\0') && (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510d50();
    local_40 = local_50;
    if (local_50 == 0) {
      bVar10 = lVar9 == 0;
      bVar2 = true;
      local_40 = 0;
    }
    else {
      lVar7 = local_50;
      if (((local_48[0] == '\0') && (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar9 == 0) {
        bVar2 = false;
        bVar10 = true;
      }
      else {
        pvVar4 = _pthread_getspecific((pthread_key_t)lVar7);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00e7bcc0();
        pVar6 = 0;
        uVar5 = FUN_016cb9d0(param_1,4);
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012521f0(uVar5,1,local_90,local_88);
        pVar6 = (pthread_key_t)CONCAT71((int7)((ulonglong)uVar5 >> 8),local_48[0]);
        pcVar8 = local_38;
        if (local_48[0] != '\0') {
          pcVar8 = local_48;
        }
        local_38[0] = local_48[0];
        *pcVar8 = '\0';
        if ((local_48[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        lVar9 = *(longlong *)(unaff_RSI + 0x50);
        if (lVar9 == local_50) {
          if ((local_38[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_38[0] == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
              lVar9 = *(longlong *)(unaff_RSI + 0x50);
            }
          }
          else {
            local_38[0] = '\0';
          }
          *(longlong *)(unaff_RSI + 0x50) = local_50;
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
        }
        if (*(longlong *)(unaff_RSI + 0x50) != 0) {
          if (iStack_8c == 0) {
            uVar5 = (**(code **)(**(longlong **)(unaff_RSI + 0x40) + 0x940))();
          }
          else {
            pvVar4 = _pthread_getspecific(pVar6);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar5 = FUN_016c98e0();
          }
          *(undefined8 *)(unaff_RSI + 0x58) = uVar5;
          if (iStack_84 == 0) {
            dVar12 = (double)(**(code **)(**(longlong **)(unaff_RSI + 0x40) + 0x940))();
            dVar11 = (double)(**(code **)(**(longlong **)(unaff_RSI + 0x40) + 0x918))();
            dVar12 = dVar12 + dVar11;
          }
          else {
            pvVar4 = _pthread_getspecific(pVar6);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar12 = (double)FUN_016c98e0();
          }
          *(double *)(unaff_RSI + 0x60) = dVar12;
        }
        bVar2 = false;
        bVar10 = false;
      }
    }
    bVar1 = false;
    goto LAB_019acb9b;
  }
  bVar2 = true;
  bVar10 = true;
  bVar3 = false;
  local_40 = 0;
  bVar1 = true;
LAB_019acb9b:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar9 = *(longlong *)(unaff_RSI + 0x50);
  if (lVar9 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar9;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (!bVar1) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
  if (bVar3 && !bVar10) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


