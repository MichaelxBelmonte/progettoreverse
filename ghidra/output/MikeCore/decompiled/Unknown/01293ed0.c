// Function: FUN_01293ed0
// Address: 01293ed0
// Size: 1786 bytes
// Class: Unknown


undefined8 * FUN_01293ed0(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  void *pvVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong *puVar10;
  pthread_key_t pVar11;
  int iVar12;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 uVar13;
  double dVar14;
  ulonglong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  ulonglong local_c0;
  char local_b8;
  undefined8 *local_b0;
  char local_a8;
  ulonglong local_a0;
  char local_98;
  double local_90;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  longlong *local_48;
  ulonglong local_40;
  char local_38;
  
  if (*param_2 != 0) {
    FUN_00c8e340();
  }
  if (*param_1 != 0) {
    FUN_00d216c0();
  }
  if ((*unaff_RSI == 0) || (*(int *)(*unaff_RSI + 0xc) == 0)) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  local_48 = plVar3;
  if (*unaff_RSI != 0) {
    local_68._0_1_ = '\0';
    local_70 = 0;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    local_60 = *unaff_RSI;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar12 = -local_58._4_4_;
        }
        else {
          iVar12 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar12);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar12 = 0;
        }
        local_58 = CONCAT44(iVar12,(int)local_58);
      }
      lVar4 = (longlong)(int)local_58;
      iVar12 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar12);
      if (*(int *)(local_60 + 0xc) <= iVar12) break;
      lVar6 = *(longlong *)(local_60 + 0x10);
      lVar4 = *(longlong *)(lVar6 + 8 + lVar4 * 8);
      local_70 = lVar4;
      pvVar5 = _pthread_getspecific((pthread_key_t)lVar6);
      lVar8 = local_70;
      pVar11 = (pthread_key_t)lVar6;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar4 = lVar8, lVar6 != 0)) {
        lVar4 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      if (*(longlong *)(lVar4 + 0xd8) != 0) {
        pvVar5 = _pthread_getspecific(pVar11);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar13 = FUN_011ef490();
        uVar1 = local_40;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            uVar13 = FUN_00d50b00();
            if ((local_38 != '\0') && (local_40 != 0)) {
              uVar13 = FUN_00d50b20();
            }
            goto LAB_012940b0;
          }
        }
        else if (local_40 != 0) {
LAB_012940b0:
          local_e0 = uVar1;
          local_d8 = '\0';
          dVar14 = (double)FUN_01294910(uVar13,&local_e0);
          uVar2 = local_40;
          if (local_38 == '\0') {
            if (((local_40 != 0) && (dVar14 = (double)FUN_00d50b00(), local_38 != '\0')) &&
               (local_40 != 0)) {
              dVar14 = (double)FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_d8 != '\0') && (local_e0 != 0)) {
            dVar14 = (double)FUN_00d50b20();
          }
          if (uVar2 == 0) {
LAB_0129418b:
            local_d0 = local_70;
            local_c8 = '\0';
            local_c0 = uVar1;
            local_b8 = '\0';
            FUN_012949c0(dVar14,&local_c0);
            if ((local_b8 != '\0') && (local_c0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_c8 != '\0') && (local_d0 != 0)) {
              FUN_00d50b20();
            }
            if (uVar2 != 0) goto LAB_01293f90;
          }
          else {
            pvVar5 = _pthread_getspecific(pVar11);
            uVar7 = uVar2;
            if ((pvVar5 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
              uVar7 = *(ulonglong *)(uVar2 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
            }
            lVar4 = local_70;
            local_90 = *(double *)(uVar7 + 0xe8);
            pvVar5 = _pthread_getspecific(pVar11);
            lVar6 = local_70;
            if ((pvVar5 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar4 = lVar6, lVar8 != 0)) {
              lVar4 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
            dVar14 = local_90;
            if (*(double *)(lVar4 + 0xe8) <= local_90 && local_90 != *(double *)(lVar4 + 0xe8))
            goto LAB_0129418b;
LAB_01293f90:
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
    }
    FUN_001159b0();
  }
  FUN_00c9fe20();
  lVar4 = local_70;
  local_40 = CONCAT71(local_40._1_7_,(char)local_68);
  puVar10 = &local_68;
  if ((char)local_68 == '\0') {
    puVar10 = &local_40;
  }
  *(undefined1 *)puVar10 = 0;
  if (((char)local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  iVar12 = *(int *)(lVar4 + 0xc);
  if ((char)local_40 != '\0') {
    FUN_00d50b20();
  }
  if (iVar12 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    plVar3 = local_48;
    goto LAB_012945ba;
  }
  if (*param_2 != 0) {
    puVar9 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar9 = &DAT_02572358;
    (*DAT_02572370)();
    FUN_00d22760();
    if (local_48 != (longlong *)0x0) {
      local_68._0_1_ = '\0';
      local_70 = 0;
      local_60 = local_48[2];
      local_58 = local_58 & 0xffffffff00000000;
      if (0 < *(int *)(local_60 + 0xc)) {
        iVar12 = 0;
        do {
          local_70 = *(longlong *)(*(longlong *)(local_60 + 0x10) + (longlong)iVar12 * 8);
          FUN_01294a70((longlong)iVar12,&local_70);
          uVar1 = local_a0;
          if (local_98 == '\0') {
            if (local_a0 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_98 = '\0';
          }
          local_40 = uVar1;
          local_38 = '\0';
          FUN_00d21140();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (uVar1 != 0) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          lVar4 = *param_2;
          local_a8 = '\0';
          local_b0 = puVar9;
          local_90 = (double)FUN_012912a0(0,0,0);
          iVar12 = *(int *)(lVar4 + 0x18);
          FUN_00c8e340(local_90,1);
          *(double *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar12) = local_90;
          if ((local_a8 != '\0') && (local_b0 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d216c0();
          iVar12 = (int)local_58 + 1;
          local_58 = CONCAT44(local_58._4_4_,iVar12);
        } while (iVar12 < *(int *)(local_60 + 0xc));
      }
      if (((char)local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (puVar9 == (undefined8 *)0x0) goto LAB_01294493;
    }
    FUN_00d50b20();
  }
LAB_01294493:
  lVar4 = *param_1;
  if (lVar4 != 0) {
    uVar13 = FUN_00ca1380();
    lVar6 = local_70;
    local_40 = CONCAT71(local_40._1_7_,(char)local_68);
    puVar10 = &local_68;
    if ((char)local_68 == '\0') {
      puVar10 = &local_40;
    }
    *(undefined1 *)puVar10 = 0;
    if (((char)local_68 != '\0') && (local_70 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if ((char)local_40 == '\0') {
      if (lVar6 != 0) {
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      local_40 = local_40 & 0xffffffffffffff00;
    }
    local_68._0_1_ = '\0';
    local_70 = lVar6;
    FUN_00d214d0(uVar13,*(undefined4 *)(lVar4 + 0xc));
    if (((char)local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c9fe20();
  lVar4 = local_70;
  puVar10 = &local_68;
  if ((char)local_68 == '\0') {
    puVar10 = &local_40;
  }
  local_40 = CONCAT71(local_40._1_7_,(char)local_68);
  *(undefined1 *)puVar10 = 0;
  if (((char)local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  plVar3 = local_48;
  if (((char)local_40 == '\0') && (lVar4 != 0)) {
    FUN_00d50b00();
  }
  FUN_01318520();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_012945ba:
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


