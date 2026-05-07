// Function: FUN_002e4d80
// Address: 002e4d80
// Size: 1798 bytes
// Class: MDAudioTrackItem
// String references:
//   "MDAudioTrackItem"


/* WARNING: Removing unreachable block (ram,0x002e532a) */
/* WARNING: Removing unreachable block (ram,0x002e533a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_002e4d80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  void *pvVar4;
  longlong lVar5;
  char *pcVar6;
  pthread_key_t pVar7;
  longlong **pplVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *unaff_RDI;
  longlong *plVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong *local_e8;
  char local_e0;
  longlong *plVar14;
  longlong *local_d0;
  char local_c8;
  longlong *local_b0;
  char local_a8 [8];
  longlong *local_a0;
  undefined8 local_98;
  int local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  char local_70 [8];
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  char local_50 [8];
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar7 = 0x2572358;
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01266fe0();
  plVar1 = local_b0;
  local_50[0] = local_a8[0];
  pcVar6 = local_50;
  if (local_a8[0] != '\0') {
    pcVar6 = local_a8;
  }
  *pcVar6 = '\0';
  if ((local_a8[0] != '\0') && (local_b0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) goto LAB_002e5475;
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01266fe0();
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  plVar11 = local_b0;
  pcVar6 = local_a8;
  if (local_a8[0] == '\0') {
    pcVar6 = local_48;
  }
  local_48[0] = local_a8[0];
  *pcVar6 = '\0';
  if ((local_a8[0] != '\0') && (local_b0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_38[0] = '\0';
  uVar13 = FUN_01beead0();
  plVar14 = local_b0;
  if (local_a8[0] == '\0') {
    if (local_b0 != (longlong *)0x0) {
      uVar13 = FUN_00d50b00();
      if ((local_a8[0] != '\0') && (local_b0 != (longlong *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
      goto LAB_002e4f7f;
    }
  }
  else if (local_b0 != (longlong *)0x0) {
LAB_002e4f7f:
    local_88 = plVar11;
    local_a8[0] = '\0';
    local_b0 = (longlong *)0x0;
    local_a0 = plVar14;
    local_98 = 0xffffffff;
    local_90 = 0;
    plVar10 = (longlong *)0x0;
    plVar11 = (longlong *)0x0;
    iVar9 = 0;
    while( true ) {
      if (iVar9 != 0) {
        if (iVar9 < 1) {
          iVar9 = -iVar9;
        }
        else {
          local_98 = CONCAT44(local_98._4_4_,(int)local_98 - iVar9);
          uVar13 = FUN_00d23690(uVar13,iVar9,param_3,param_4,plVar14);
          local_90 = local_90 + iVar9;
          iVar9 = 0;
        }
        local_98 = CONCAT44(iVar9,(int)local_98);
      }
      lVar5 = (longlong)(int)local_98;
      iVar9 = (int)local_98 + 1;
      local_98 = CONCAT44(local_98._4_4_,iVar9);
      if (*(int *)((longlong)local_a0 + 0xc) <= iVar9) break;
      plVar12 = *(longlong **)(local_a0[2] + 8 + lVar5 * 8);
      local_b0 = plVar12;
      if ((DAT_02700970 == '\0') &&
         (iVar9 = ___cxa_guard_acquire(), uVar13 = extraout_XMM0_Da_00, iVar9 != 0)) {
        _DAT_026d78f8 = FUN_0006e710();
        _DAT_026d78e0 = "MDAudioTrackItem";
        _DAT_026d78e8 = 0x70;
        _DAT_026d78f0 = FUN_0006e6c0;
        _DAT_026d7900 = 0;
        uRam00000000026d7908 = 0;
        _DAT_026d7910 = 0;
        _DAT_026d7988 = 0;
        uRam00000000026d7990 = 0;
        _DAT_026d7998 = 0;
        DAT_026d799a = 1;
        _DAT_026d7918 = 0;
        uRam00000000026d7920 = 0;
        _DAT_026d7928 = 0;
        uRam00000000026d7930 = 0;
        _DAT_026d7938 = 0;
        uRam00000000026d7940 = 0;
        _DAT_026d7948 = 0;
        uRam00000000026d7950 = 0;
        _DAT_026d7958 = 0;
        uRam00000000026d7960 = 0;
        _DAT_026d7968 = 0;
        uRam00000000026d7970 = 0;
        _DAT_026d7978 = 0;
        uRam00000000026d7980 = 0;
        DAT_026d79a3 = 0;
        _DAT_026d799b = 0;
        uVar13 = ___cxa_guard_release();
      }
      pplVar8 = (longlong **)&DAT_02802688;
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar8 = &local_b0;
        uVar13 = extraout_XMM0_Da;
        if (cVar2 == '\0') {
          pplVar8 = (longlong **)&DAT_02802688;
        }
      }
      plVar12 = *pplVar8;
      if (*pplVar8 == plVar11) {
        plVar12 = plVar11;
      }
      if (plVar12 == (longlong *)0x0) {
        if (plVar10 != (longlong *)0x0) {
          if (local_38[0] != '\0') {
            uVar13 = FUN_00d50b20();
          }
          local_38[0] = '\0';
        }
        plVar10 = (longlong *)0x0;
      }
      else {
        uVar13 = FUN_00075b90();
        plVar11 = local_78;
        if (plVar10 == local_78) {
          plVar11 = plVar10;
          if (((local_38[0] == '\0') && (plVar10 != (longlong *)0x0)) && (local_70[0] != '\0')) {
            local_38[0] = '\x01';
            goto LAB_002e5125;
          }
        }
        else {
          if (local_70[0] == '\0') {
            if (plVar10 != (longlong *)0x0 && local_38[0] != '\0') {
              uVar13 = FUN_00d50b20();
            }
            pcVar6 = local_38;
          }
          else {
            if (plVar10 != (longlong *)0x0 && local_38[0] != '\0') {
              uVar13 = FUN_00d50b20();
            }
            local_38[0] = '\x01';
            plVar10 = plVar11;
LAB_002e5125:
            local_38[0] = '\x01';
            pcVar6 = local_70;
            plVar11 = plVar10;
          }
          *pcVar6 = '\0';
          plVar10 = plVar11;
          plVar11 = local_78;
        }
        if ((local_70[0] != '\0') && (plVar11 != (longlong *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
      }
      if ((plVar10 == plVar1) || (plVar10 == local_88)) {
        uVar13 = FUN_01bc0650();
        plVar11 = local_78;
        local_40[0] = local_70[0];
        pcVar6 = local_70;
        if (local_70[0] == '\0') {
          pcVar6 = local_40;
        }
        *pcVar6 = '\0';
        if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
        if (plVar11 != (longlong *)0x0) {
          uVar13 = (**(code **)(*plVar11 + 0x4a0))();
          plVar11 = local_78;
          if (local_70[0] == '\0') {
            if (local_78 != (longlong *)0x0) {
              FUN_00d50b00();
              if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_002e520c;
            }
          }
          else if (local_78 != (longlong *)0x0) {
LAB_002e520c:
            local_70[0] = '\0';
            local_78 = (longlong *)0x0;
            local_80 = plVar11;
            local_68 = plVar11;
            local_60 = 0xffffffff;
            local_58 = 0;
            local_60._4_4_ = 0;
            while( true ) {
              if (local_60._4_4_ != 0) {
                if (local_60._4_4_ < 1) {
                  iVar9 = -local_60._4_4_;
                }
                else {
                  iVar9 = (int)local_60 - local_60._4_4_;
                  local_60 = CONCAT44(local_60._4_4_,iVar9);
                  FUN_00d23690();
                  local_58 = local_58 + local_60._4_4_;
                  iVar9 = 0;
                }
                local_60 = CONCAT44(iVar9,(int)local_60);
              }
              lVar5 = (longlong)(int)local_60;
              iVar9 = (int)local_60 + 1;
              local_60 = CONCAT44(local_60._4_4_,iVar9);
              if (*(int *)((longlong)local_68 + 0xc) <= iVar9) break;
              local_78 = *(longlong **)(local_68[2] + 8 + lVar5 * 8);
              FUN_01bc84c0();
              (**(code **)(*local_e8 + 0x398))();
              if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (local_d0 == plVar1) {
                local_d0 = local_78;
                local_c8 = '\0';
                FUN_00d21140();
              }
            }
            FUN_000a9680();
            uVar13 = FUN_00d50b20();
          }
          if (local_40[0] != '\0') {
            uVar13 = FUN_00d50b20();
          }
        }
      }
      plVar11 = plVar12;
      iVar9 = local_98._4_4_;
    }
    FUN_002e0650();
    FUN_00d50b20();
    plVar11 = local_88;
    if ((local_38[0] != '\0') && (plVar10 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_48[0] != '\0') && (plVar11 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_002e5475:
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((local_50[0] != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


