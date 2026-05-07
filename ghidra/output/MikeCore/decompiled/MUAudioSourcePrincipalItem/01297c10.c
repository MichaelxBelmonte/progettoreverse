// Function: FUN_01297c10
// Address: 01297c10
// Size: 2467 bytes
// Class: MUAudioSourcePrincipalItem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01297c10(undefined8 param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  pthread_key_t pVar10;
  double dVar11;
  longlong *unaff_RSI;
  longlong lVar12;
  longlong *unaff_RDI;
  undefined8 extraout_XMM0_Qb;
  longlong local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  double local_e0;
  longlong *local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  double local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  double local_80;
  double local_78;
  undefined8 uStack_70;
  double local_60;
  double local_58;
  char local_50;
  longlong local_48;
  pthread_key_t local_40;
  int iStack_3c;
  int iStack_38;
  
  local_d0 = *unaff_RSI;
  local_c8 = '\0';
  local_e8 = param_1;
  local_d8 = param_2;
  FUN_016cbba0();
  local_80 = local_58;
  if (local_50 == '\0') {
    if (((local_58 != 0.0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0.0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c8e690();
  dVar1 = local_58;
  if (((local_50 == '\0') && (local_58 != 0.0)) &&
     ((FUN_00d50b00(), local_50 != '\0' && (local_58 != 0.0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  uVar5 = ___bzero();
  lVar12 = 0;
  if (*unaff_RDI != 0) {
    local_50 = '\0';
    local_58 = 0.0;
    iStack_3c = 0;
    iStack_38 = 0;
    lVar12 = 0xffffffff;
    local_48 = *unaff_RDI;
    while( true ) {
      local_40 = (pthread_key_t)lVar12;
      if (iStack_3c != 0) {
        if (iStack_3c < 1) {
          iStack_3c = -iStack_3c;
        }
        else {
          local_40 = local_40 - iStack_3c;
          FUN_00d23690();
          iStack_38 = iStack_38 + iStack_3c;
          iStack_3c = 0;
        }
      }
      local_40 = local_40 + 1;
      if (*(int *)(local_48 + 0xc) <= (int)local_40) break;
      dVar11 = *(double *)(*(longlong *)(local_48 + 0x10) + (longlong)(int)local_40 * 8);
      local_58 = dVar11;
      pvVar6 = _pthread_getspecific(local_40);
      dVar9 = local_58;
      if ((pvVar6 != (void *)0x0) && (lVar12 = FUN_00e8b990(), dVar11 = dVar9, lVar12 != 0)) {
        dVar11 = *(double *)
                  ((longlong)dVar9 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
      }
      lVar12 = (longlong)(int)local_40;
      *(undefined8 *)(*(longlong *)((longlong)dVar1 + 0x10) + (iStack_38 + lVar12) * 8) =
           *(undefined8 *)((longlong)dVar11 + 0xe8);
    }
    uVar5 = FUN_001159b0();
    lVar12 = *unaff_RDI;
  }
  local_60 = (double)CONCAT44(local_60._4_4_,(int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1));
  if (*(int *)(lVar12 + 0xc) != 0) {
    pvVar6 = _pthread_getspecific((pthread_key_t)lVar12);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar4 = FUN_016c2e90();
    pVar10 = (pthread_key_t)lVar12;
    if (iVar4 != 0) {
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar4 = FUN_016c2e90();
      pVar10 = (pthread_key_t)lVar12;
      if (iVar4 != 1) goto LAB_012981ba;
    }
    if (*unaff_RDI == 0) {
      local_78 = DAT_023b2568;
      uStack_70 = 0;
    }
    else {
      local_50 = '\0';
      local_58 = 0.0;
      local_40 = 0xffffffff;
      iStack_3c = 0;
      iStack_38 = 0;
      local_78 = DAT_023b2568;
      uStack_70 = 0;
      local_48 = *unaff_RDI;
      while( true ) {
        if (iStack_3c != 0) {
          if (iStack_3c < 1) {
            iStack_3c = -iStack_3c;
          }
          else {
            local_40 = local_40 - iStack_3c;
            FUN_00d23690();
            iStack_38 = iStack_38 + iStack_3c;
            iStack_3c = 0;
          }
        }
        lVar12 = (longlong)(int)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(local_48 + 0xc) <= (int)local_40) break;
        lVar7 = *(longlong *)(local_48 + 0x10);
        local_58 = *(double *)(lVar7 + 8 + lVar12 * 8);
        pvVar6 = _pthread_getspecific((pthread_key_t)lVar7);
        pVar10 = (pthread_key_t)lVar7;
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar3 = FUN_01263cf0();
        if (cVar3 == '\0') {
          pvVar6 = _pthread_getspecific(pVar10);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e7c0();
          pvVar6 = _pthread_getspecific(pVar10);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_60 = (double)FUN_013de8d0();
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          if (local_60 < local_78) {
            pvVar6 = _pthread_getspecific(pVar10);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e7c0();
            pvVar6 = _pthread_getspecific(pVar10);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_78 = (double)FUN_013de8d0();
            uStack_70 = extraout_XMM0_Qb;
            if ((local_88 != '\0') && (local_90 != 0)) {
              FUN_00d50b20();
            }
          }
        }
      }
      lVar12 = local_48;
      FUN_001159b0();
      pVar10 = (pthread_key_t)lVar12;
    }
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar12 = 0;
    uVar5 = FUN_016c45d0(~-(ulonglong)(DAT_023b2568 == local_78) & (ulonglong)local_78,0);
    local_58 = (double)FUN_016c4760(uVar5,0);
    pvVar6 = _pthread_getspecific((pthread_key_t)lVar12);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e7bfe0();
    FUN_016ea680();
    local_60 = (double)((ulonglong)local_60 & 0xffffffff00000000);
  }
LAB_012981ba:
  dVar11 = local_80;
  pVar10 = (pthread_key_t)lVar12;
  if (local_80 != 0.0) {
    FUN_00d50b00();
  }
  dVar9 = dVar11;
  if (*(int *)(*unaff_RDI + 0xc) == 0) goto LAB_012983d4;
  lVar12 = **(longlong **)(*unaff_RDI + 0x10);
  pvVar6 = _pthread_getspecific(pVar10);
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
  }
  local_78 = *(double *)(lVar12 + 0xe8);
  uStack_70 = 0;
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e7c0();
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_e0 = (double)FUN_013de8d0();
  if ((local_50 != '\0') && (local_58 != 0.0)) {
    FUN_00d50b20();
  }
  if ((double)((ulonglong)(local_78 - local_e0) & _DAT_023908f0) <= DAT_023b67d8) goto LAB_012983d4;
  local_c0 = *local_d8;
  local_b8 = '\0';
  local_b0 = dVar11;
  local_a8 = '\0';
  uVar5 = FUN_00e7bcc0();
  FUN_01705e00(local_e8,&local_b0,(ulonglong)local_60 & 0xff,uVar5);
  dVar9 = local_58;
  dVar2 = dVar11;
  if (dVar11 == local_58) {
LAB_0129838c:
    dVar9 = dVar2;
    if (local_50 != '\0') {
LAB_01298392:
      if (local_58 != 0.0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (local_50 == '\0') {
      if (local_58 != 0.0) {
        local_60 = dVar11;
        FUN_00d50b00();
      }
      if (dVar11 != 0.0) {
        local_60 = dVar9;
        FUN_00d50b20();
        dVar2 = dVar9;
        goto LAB_0129838c;
      }
      if (local_50 == '\0') goto LAB_012983a0;
      goto LAB_01298392;
    }
    if (dVar11 != 0.0) {
      local_60 = local_58;
      FUN_00d50b20();
    }
    local_50 = '\0';
  }
LAB_012983a0:
  if ((local_a8 != '\0') && (local_b0 != 0.0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
LAB_012983d4:
  local_108 = *local_d8;
  local_100 = 0;
  uVar5 = FUN_00e7bdb0();
  local_f0 = 0;
  local_f8 = 0;
  FUN_012910e0(DAT_0238fee8,&local_108,&local_f8);
  local_a0 = *unaff_RDI;
  local_98 = '\0';
  FUN_00e7bdb0();
  FUN_01287c80();
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  lVar12 = *unaff_RDI;
  if (lVar12 != 0) {
    local_50 = '\0';
    local_58 = 0.0;
    iStack_38 = 0;
    local_40 = 0;
    iStack_3c = 0;
    local_78 = dVar9;
    local_48 = lVar12;
    if (0 < *(int *)(lVar12 + 0xc)) {
      lVar7 = 0;
      do {
        dVar11 = *(double *)(*(longlong *)(lVar12 + 0x10) + lVar7 * 8);
        local_58 = dVar11;
        pvVar6 = _pthread_getspecific((pthread_key_t)uVar5);
        dVar9 = dVar11;
        if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          dVar9 = *(double *)
                   ((longlong)dVar11 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
        local_60 = *(double *)((longlong)dVar9 + 0xe8) -
                   *(double *)(*(longlong *)((longlong)dVar1 + 0x10) + lVar7 * 8);
        pvVar6 = _pthread_getspecific((pthread_key_t)uVar5);
        if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          dVar11 = *(double *)
                    ((longlong)dVar11 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
        *(double *)((longlong)dVar11 + 0x1b0) = local_60;
        lVar7 = lVar7 + 1;
        local_40 = (pthread_key_t)lVar7;
      } while ((int)local_40 < *(int *)(lVar12 + 0xc));
    }
    FUN_001159b0();
    dVar9 = local_78;
    dVar11 = local_80;
  }
  if (dVar9 != 0.0) {
    FUN_00d50b20();
  }
  if (dVar1 != 0.0) {
    FUN_00d50b20();
  }
  if (dVar11 != 0.0) {
    FUN_00d50b20();
  }
  return;
}


