// Function: FUN_00d43550
// Address: 00d43550
// Size: 2222 bytes
// Class: GNList
// String references:
//   "GNList"


/* WARNING: Removing unreachable block (ram,0x00d438e4) */
/* WARNING: Removing unreachable block (ram,0x00d438f0) */
/* WARNING: Removing unreachable block (ram,0x00d43660) */
/* WARNING: Removing unreachable block (ram,0x00d4366c) */
/* WARNING: Removing unreachable block (ram,0x00d43caa) */
/* WARNING: Removing unreachable block (ram,0x00d43cb6) */
/* WARNING: Removing unreachable block (ram,0x00d4375d) */
/* WARNING: Removing unreachable block (ram,0x00d43769) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00d43550(undefined8 param_1,longlong *param_2,size_t param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong lVar8;
  char *pcVar9;
  void *pvVar10;
  ulonglong uVar11;
  int iVar12;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined8 unaff_R14;
  ulonglong uVar13;
  longlong *plVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar15;
  longlong local_98;
  char local_90 [8];
  longlong local_88;
  char local_80 [8];
  longlong local_78;
  undefined8 local_70;
  int local_68;
  char local_60 [8];
  char local_58 [8];
  char local_50 [8];
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  if (unaff_RSI == param_2) {
    uVar13 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
    goto LAB_00d43d23;
  }
  uVar13 = 0;
  if ((unaff_RSI == (longlong *)0x0) || (param_2 == (longlong *)0x0)) goto LAB_00d43d23;
  FUN_00d4efa0();
  lVar3 = local_88;
  local_60[0] = local_80[0];
  pcVar9 = local_60;
  if (local_80[0] != '\0') {
    pcVar9 = local_80;
  }
  *pcVar9 = '\0';
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d4efa0();
  lVar4 = local_88;
  local_58[0] = local_80[0];
  pcVar9 = local_58;
  if (local_80[0] != '\0') {
    pcVar9 = local_80;
  }
  *pcVar9 = '\0';
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 == lVar4) {
    if (*(longlong *)(unaff_RDI + 0x10) != 0) {
      cVar6 = FUN_00d7a850();
      uVar13 = 1;
      if (cVar6 != '\0') goto LAB_00d43cf9;
    }
    uVar13 = 0;
    if ((DAT_027048b0 == '\0') && (iVar12 = ___cxa_guard_acquire(), iVar12 != 0)) {
      _DAT_026cd478 = FUN_00d4fe50();
      DAT_026cd460 = "GNList";
      _DAT_026cd468 = 0x20;
      _DAT_026cd470 = FUN_00018210;
      _DAT_026cd480 = 0;
      uRam00000000026cd488 = 0;
      _DAT_026cd490 = 0;
      _DAT_026cd508 = 0;
      uRam00000000026cd510 = 0;
      _DAT_026cd518 = 0;
      DAT_026cd51a = 6;
      _DAT_026cd498 = 0;
      uRam00000000026cd4a0 = 0;
      _DAT_026cd4a8 = 0;
      uRam00000000026cd4b0 = 0;
      _DAT_026cd4b8 = 0;
      uRam00000000026cd4c0 = 0;
      _DAT_026cd4c8 = 0;
      uRam00000000026cd4d0 = 0;
      _DAT_026cd4d8 = 0;
      uRam00000000026cd4e0 = 0;
      _DAT_026cd4e8 = 0;
      uRam00000000026cd4f0 = 0;
      _DAT_026cd4f8 = 0;
      uRam00000000026cd500 = 0;
      DAT_026cd523 = 0;
      _DAT_026cd51b = 0;
      ___cxa_guard_release();
    }
    (**(code **)(*unaff_RSI + 0x360))();
    cVar6 = FUN_00e85ea0();
    plVar14 = unaff_RSI;
    if (cVar6 == '\0') {
      plVar14 = DAT_02802688;
    }
    if (plVar14 != (longlong *)0x0) {
      uVar1 = *(uint *)((longlong)plVar14 + 0xc);
      uVar13 = (ulonglong)uVar1;
      if (uVar1 == *(uint *)((longlong)param_2 + 0xc)) {
        if (0 < (int)uVar1) {
          uVar11 = 0;
          uVar15 = extraout_XMM0_Da;
          do {
            cVar6 = FUN_00d43550(uVar15,*(undefined8 *)(param_2[2] + uVar11 * 8));
            if (cVar6 == '\0') goto LAB_00d43cef;
            uVar11 = uVar11 + 1;
            uVar15 = extraout_XMM0_Da_00;
          } while (uVar13 != uVar11);
        }
        goto LAB_00d43776;
      }
      goto LAB_00d43cef;
    }
    cVar6 = (**(code **)(*unaff_RSI + 0x70))();
    if (cVar6 == '\0') {
      FUN_00c820a0();
      lVar5 = local_88;
      local_50[0] = local_80[0];
      pcVar9 = local_50;
      if (local_80[0] != '\0') {
        pcVar9 = local_80;
      }
      *pcVar9 = '\0';
      if ((local_80[0] != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((lVar5 != 0) && (*(int *)(lVar5 + 0xc) != 0)) {
        local_80[0] = '\0';
        local_88 = 0;
        local_78 = lVar5;
        local_70 = 0xffffffff;
        local_68 = 0;
        local_70._4_4_ = 0;
        do {
          if (local_70._4_4_ != 0) {
            if (local_70._4_4_ < 1) {
              iVar12 = -local_70._4_4_;
            }
            else {
              iVar12 = (int)local_70 - local_70._4_4_;
              local_70 = CONCAT44(local_70._4_4_,iVar12);
              FUN_00d23690();
              local_68 = local_68 + local_70._4_4_;
              iVar12 = 0;
            }
            local_70 = CONCAT44(iVar12,(int)local_70);
          }
          lVar8 = (longlong)(int)local_70;
          iVar12 = (int)local_70 + 1;
          local_70 = CONCAT44(local_70._4_4_,iVar12);
          if (*(int *)(local_78 + 0xc) <= iVar12) {
            FUN_00559a70();
            break;
          }
          local_88 = *(longlong *)(*(longlong *)(local_78 + 0x10) + 8 + lVar8 * 8);
          if (((*(longlong *)(local_88 + 0x70) == 0) ||
              ((*(byte *)(*(longlong *)(local_88 + 0x70) + 0x18) & 1) == 0)) &&
             (cVar6 = (**(code **)(*unaff_RSI + 0x2b8))(), cVar6 != '\0')) {
            uVar15 = (**(code **)(*unaff_RSI + 0x210))(extraout_XMM0_Da_01,local_88);
            local_40[0] = local_90[0];
            pcVar9 = local_90;
            if (local_90[0] == '\0') {
              pcVar9 = local_40;
            }
            *pcVar9 = '\0';
            if ((local_90[0] != '\0') && (local_98 != 0)) {
              uVar15 = FUN_00d50b20();
            }
            uVar15 = (**(code **)(*param_2 + 0x210))(uVar15,local_88);
            local_38[0] = local_90[0];
            pcVar9 = local_90;
            if (local_90[0] == '\0') {
              pcVar9 = local_38;
            }
            *pcVar9 = '\0';
            if ((local_90[0] != '\0') && (local_98 != 0)) {
              uVar15 = FUN_00d50b20();
            }
            cVar6 = FUN_00d43550(uVar15,local_98);
            if ((local_38[0] != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            if ((local_40[0] != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            if (cVar6 == '\0') goto LAB_00d43cbd;
          }
        } while( true );
      }
      FUN_00c81c40();
      lVar8 = local_88;
      pcVar9 = local_80;
      if (local_80[0] == '\0') {
        pcVar9 = local_40;
      }
      local_40[0] = local_80[0];
      *pcVar9 = '\0';
      if ((local_80[0] != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (lVar8 != 0) {
        local_80[0] = '\0';
        local_88 = 0;
        local_78 = lVar8;
        local_70 = 0xffffffff;
        local_68 = 0;
        local_70._4_4_ = 0;
        do {
          if (local_70._4_4_ != 0) {
            if (local_70._4_4_ < 1) {
              iVar12 = -local_70._4_4_;
            }
            else {
              iVar12 = (int)local_70 - local_70._4_4_;
              local_70 = CONCAT44(local_70._4_4_,iVar12);
              FUN_00d23690();
              local_68 = local_68 + local_70._4_4_;
              iVar12 = 0;
            }
            local_70 = CONCAT44(iVar12,(int)local_70);
          }
          lVar8 = (longlong)(int)local_70;
          iVar12 = (int)local_70 + 1;
          local_70 = CONCAT44(local_70._4_4_,iVar12);
          if (*(int *)(local_78 + 0xc) <= iVar12) {
            uVar13 = 0;
            goto LAB_00d43c19;
          }
          pvVar10 = *(void **)(local_78 + 0x10);
          local_88 = *(longlong *)((longlong)pvVar10 + lVar8 * 8 + 8);
          lVar8 = *(longlong *)(local_88 + 0x60);
          if (((lVar8 == 0) || ((*(byte *)(lVar8 + 0x18) & 1) == 0)) &&
             (*(char *)(lVar8 + 0x19) != '\0')) {
            if (*(char *)(lVar8 + 0x19) == '@') {
              uVar15 = (**(code **)(*unaff_RSI + 0x210))();
              local_38[0] = local_90[0];
              pcVar9 = local_90;
              if (local_90[0] == '\0') {
                pcVar9 = local_38;
              }
              *pcVar9 = '\0';
              if ((local_90[0] != '\0') && (local_98 != 0)) {
                uVar15 = FUN_00d50b20();
              }
              uVar15 = (**(code **)(*param_2 + 0x210))(uVar15,local_88);
              local_48[0] = local_90[0];
              pcVar9 = local_90;
              if (local_90[0] == '\0') {
                pcVar9 = local_48;
              }
              *pcVar9 = '\0';
              if ((local_90[0] != '\0') && (local_98 != 0)) {
                uVar15 = FUN_00d50b20();
              }
              cVar6 = FUN_00d43550(uVar15,local_98);
              if ((local_48[0] != '\0') && (local_98 != 0)) {
                FUN_00d50b20();
              }
              if ((local_38[0] != '\0') && (local_98 != 0)) {
                FUN_00d50b20();
              }
              if (cVar6 == '\0') goto LAB_00d43c0e;
            }
            else {
              iVar12 = FUN_00e82730();
              (**(code **)(*unaff_RSI + 0x218))();
              (**(code **)(*param_2 + 0x218))();
              iVar12 = _memcmp(pvVar10,(void *)(longlong)iVar12,param_3);
              if (iVar12 != 0) goto LAB_00d43c0e;
            }
          }
        } while( true );
      }
      uVar13 = 0;
      goto LAB_00d43cd3;
    }
    cVar6 = (**(code **)(*unaff_RSI + 0x50))();
    if (cVar6 == '\0') goto LAB_00d43cef;
    goto LAB_00d43776;
  }
  uVar13 = 0;
  goto LAB_00d43cf9;
LAB_00d43cbd:
  FUN_00559a70();
  uVar13 = 1;
  goto LAB_00d43cd3;
LAB_00d43c0e:
  uVar13 = 1;
LAB_00d43c19:
  FUN_00cc1480();
  if (local_40[0] != '\0') {
    FUN_00d50b20();
  }
LAB_00d43cd3:
  if ((local_50[0] != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  if ((int)uVar13 == 0) {
LAB_00d43776:
    if (*(longlong *)(unaff_RDI + 0x10) == 0) {
      puVar7 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &DAT_02578b00;
      (*DAT_02578b18)();
      puVar2 = *(undefined8 **)(unaff_RDI + 0x10);
      if (puVar2 == puVar7) {
        FUN_00d50b20();
      }
      else {
        *(undefined8 **)(unaff_RDI + 0x10) = puVar7;
        if (puVar2 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d7a0f0(1,1);
    }
    FUN_00d7a410();
    uVar13 = CONCAT71((int7)(uVar13 >> 8),1);
  }
  else {
LAB_00d43cef:
    uVar13 = 0;
  }
LAB_00d43cf9:
  if ((local_58[0] != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60[0] != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
LAB_00d43d23:
  return uVar13 & 0xffffffff;
}


