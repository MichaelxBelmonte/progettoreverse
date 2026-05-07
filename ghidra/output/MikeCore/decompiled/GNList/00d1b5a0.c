// Function: FUN_00d1b5a0
// Address: 00d1b5a0
// Size: 2785 bytes
// Class: GNList
// String references:
//   "GNList"
//   "_internalID%I"
//   "GNString"
//   "GNDictionary"


/* WARNING: Removing unreachable block (ram,0x00d1b77f) */
/* WARNING: Removing unreachable block (ram,0x00d1b78b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d1b5a0(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  char *pcVar6;
  longlong lVar7;
  longlong **pplVar8;
  int iVar9;
  longlong *unaff_RSI;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong *local_98;
  undefined4 local_90;
  int local_8c;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58 [8];
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  char local_38 [8];
  
  plVar2 = DAT_0277c878;
  if ((*unaff_RSI != 0) && (lVar1 = *(longlong *)(*unaff_RSI + 0x10), 0 < *(int *)(lVar1 + 0xc))) {
    lVar10 = 0;
    do {
      lVar7 = DAT_02781680;
      plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + lVar10 * 8);
      if (DAT_02781680 != 0) {
        FUN_00d50b00();
      }
      cVar5 = FUN_00d90870();
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      plVar3 = DAT_027f37d8;
      if (cVar5 != '\0') {
        if (DAT_027f37d8 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        cVar5 = (**(code **)(*plVar2 + 0x50))();
        if (plVar3 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        plVar3 = DAT_0277c878;
        if (cVar5 == '\0') {
          if (DAT_0277c878 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          cVar5 = (**(code **)(*plVar2 + 0x50))();
          if (plVar3 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if (cVar5 == '\0') {
            (**(code **)(*(longlong *)*unaff_RSI + 0x88))();
            plVar2 = local_60;
            local_38[0] = local_58[0] != '\0';
            local_98 = local_60;
            pcVar6 = local_38;
            if ((bool)local_38[0]) {
              pcVar6 = local_58;
            }
            *pcVar6 = '\0';
            if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar2 != (longlong *)0x0) {
              if ((DAT_026fdd40 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
                _DAT_026cd0e8 = FUN_00d4fe50();
                DAT_026cd0d0 = "GNDictionary";
                _DAT_026cd0d8 = 0x28;
                _DAT_026cd0e0 = FUN_00022d20;
                _DAT_026cd0f0 = 0;
                uRam00000000026cd0f8 = 0;
                _DAT_026cd100 = 0;
                _DAT_026cd178 = 0;
                uRam00000000026cd180 = 0;
                _DAT_026cd188 = 0;
                DAT_026cd18a = 6;
                _DAT_026cd108 = 0;
                uRam00000000026cd110 = 0;
                _DAT_026cd118 = 0;
                uRam00000000026cd120 = 0;
                _DAT_026cd128 = 0;
                uRam00000000026cd130 = 0;
                _DAT_026cd138 = 0;
                uRam00000000026cd140 = 0;
                _DAT_026cd148 = 0;
                uRam00000000026cd150 = 0;
                _DAT_026cd158 = 0;
                uRam00000000026cd160 = 0;
                _DAT_026cd168 = 0;
                uRam00000000026cd170 = 0;
                DAT_026cd193 = 0;
                _DAT_026cd18b = 0;
                ___cxa_guard_release();
              }
              (**(code **)(*plVar2 + 0x360))();
              cVar5 = FUN_00e85ea0();
              pplVar8 = (longlong **)&DAT_02802688;
              if (cVar5 != '\0') {
                if ((DAT_026fd0c0 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
                  _DAT_026d5e58 = FUN_00d4fe50();
                  DAT_026d5e40 = "GNString";
                  _DAT_026d5e48 = 0x40;
                  _DAT_026d5e50 = FUN_0005d920;
                  _DAT_026d5e60 = 0;
                  uRam00000000026d5e68 = 0;
                  _DAT_026d5e70 = 0;
                  uRam00000000026d5e78 = 0;
                  _DAT_026d5e80 = 0;
                  uRam00000000026d5e88 = 0;
                  _DAT_026d5e90 = 0;
                  uRam00000000026d5e98 = 0;
                  _DAT_026d5ea0 = 0;
                  uRam00000000026d5ea8 = 0;
                  _DAT_026d5eb0 = 0;
                  uRam00000000026d5eb8 = 0;
                  _DAT_026d5ec0 = 0;
                  uRam00000000026d5ec8 = 0;
                  _DAT_026d5ed0 = 0;
                  uRam00000000026d5ed8 = 0;
                  _DAT_026d5ee0 = 0;
                  uRam00000000026d5ee8 = 0;
                  _DAT_026d5ef0 = 0;
                  uRam00000000026d5ef8 = 0;
                  _DAT_026d5f00 = 0;
                  ___cxa_guard_release();
                }
                cVar5 = FUN_00e8db60();
                pplVar8 = &local_98;
                if (cVar5 == '\0') {
                  pplVar8 = (longlong **)&DAT_02802688;
                }
              }
              plVar4 = local_98;
              plVar3 = DAT_027f37d8;
              plVar2 = *pplVar8;
              if (plVar2 == (longlong *)0x0) {
                if ((DAT_027048b0 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
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
                pplVar8 = (longlong **)&DAT_02802688;
                if (plVar4 != (longlong *)0x0) {
                  (**(code **)(*plVar4 + 0x360))();
                  cVar5 = FUN_00e85ea0();
                  pplVar8 = &local_98;
                  if (cVar5 == '\0') {
                    pplVar8 = (longlong **)&DAT_02802688;
                  }
                }
                if (*pplVar8 != (longlong *)0x0) {
                  local_58[0] = '\0';
                  local_60 = (longlong *)0x0;
                  local_50 = *pplVar8;
                  local_48 = 0xffffffff;
                  local_40 = 0;
                  local_48._4_4_ = 0;
                  while( true ) {
                    if (local_48._4_4_ != 0) {
                      if (local_48._4_4_ < 1) {
                        iVar9 = -local_48._4_4_;
                      }
                      else {
                        iVar9 = (int)local_48 - local_48._4_4_;
                        local_48 = CONCAT44(local_48._4_4_,iVar9);
                        FUN_00d23690();
                        local_40 = local_40 + local_48._4_4_;
                        iVar9 = 0;
                      }
                      local_48 = CONCAT44(iVar9,(int)local_48);
                    }
                    lVar7 = (longlong)(int)local_48;
                    iVar9 = (int)local_48 + 1;
                    local_48 = CONCAT44(local_48._4_4_,iVar9);
                    if (*(int *)((longlong)local_50 + 0xc) <= iVar9) break;
                    plVar2 = *(longlong **)(local_50[2] + 8 + lVar7 * 8);
                    local_60 = plVar2;
                    local_70 = plVar2;
                    if ((DAT_026fdd40 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
                      _DAT_026cd0e8 = FUN_00d4fe50();
                      DAT_026cd0d0 = "GNDictionary";
                      _DAT_026cd0d8 = 0x28;
                      _DAT_026cd0e0 = FUN_00022d20;
                      _DAT_026cd0f0 = 0;
                      uRam00000000026cd0f8 = 0;
                      _DAT_026cd100 = 0;
                      _DAT_026cd178 = 0;
                      uRam00000000026cd180 = 0;
                      _DAT_026cd188 = 0;
                      DAT_026cd18a = 6;
                      _DAT_026cd108 = 0;
                      uRam00000000026cd110 = 0;
                      _DAT_026cd118 = 0;
                      uRam00000000026cd120 = 0;
                      _DAT_026cd128 = 0;
                      uRam00000000026cd130 = 0;
                      _DAT_026cd138 = 0;
                      uRam00000000026cd140 = 0;
                      _DAT_026cd148 = 0;
                      uRam00000000026cd150 = 0;
                      _DAT_026cd158 = 0;
                      uRam00000000026cd160 = 0;
                      _DAT_026cd168 = 0;
                      uRam00000000026cd170 = 0;
                      DAT_026cd193 = 0;
                      _DAT_026cd18b = 0;
                      ___cxa_guard_release();
                    }
                    pplVar8 = (longlong **)&DAT_02802688;
                    if (plVar2 != (longlong *)0x0) {
                      (**(code **)(*plVar2 + 0x360))();
                      cVar5 = FUN_00e85ea0();
                      pplVar8 = (longlong **)&DAT_02802688;
                      if (cVar5 != '\0') {
                        if ((DAT_026fd0c0 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0))
                        {
                          _DAT_026d5e58 = FUN_00d4fe50();
                          DAT_026d5e40 = "GNString";
                          _DAT_026d5e48 = 0x40;
                          _DAT_026d5e50 = FUN_0005d920;
                          _DAT_026d5e60 = 0;
                          uRam00000000026d5e68 = 0;
                          _DAT_026d5e70 = 0;
                          uRam00000000026d5e78 = 0;
                          _DAT_026d5e80 = 0;
                          uRam00000000026d5e88 = 0;
                          _DAT_026d5e90 = 0;
                          uRam00000000026d5e98 = 0;
                          _DAT_026d5ea0 = 0;
                          uRam00000000026d5ea8 = 0;
                          _DAT_026d5eb0 = 0;
                          uRam00000000026d5eb8 = 0;
                          _DAT_026d5ec0 = 0;
                          uRam00000000026d5ec8 = 0;
                          _DAT_026d5ed0 = 0;
                          uRam00000000026d5ed8 = 0;
                          _DAT_026d5ee0 = 0;
                          uRam00000000026d5ee8 = 0;
                          _DAT_026d5ef0 = 0;
                          uRam00000000026d5ef8 = 0;
                          _DAT_026d5f00 = 0;
                          ___cxa_guard_release();
                        }
                        cVar5 = FUN_00e8db60();
                        pplVar8 = &local_70;
                        if (cVar5 == '\0') {
                          pplVar8 = (longlong **)&DAT_02802688;
                        }
                      }
                    }
                    plVar2 = DAT_027f37d8;
                    if (*pplVar8 != (longlong *)0x0) {
                      if (DAT_027f37d8 != (longlong *)0x0) {
                        FUN_00d50b00();
                      }
                      local_70 = plVar2;
                      local_68 = '\0';
                      cVar5 = FUN_00c9ff50();
                      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (plVar2 != (longlong *)0x0) {
                        FUN_00d50b20();
                      }
                      if (cVar5 != '\0') {
                        local_70 = local_60;
                        local_68 = '\0';
                        uVar11 = FUN_00d21140();
                        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                          uVar11 = FUN_00d50b20();
                        }
                        FUN_00d1b5a0(uVar11,param_2,param_3,param_4,0);
                      }
                    }
                  }
                  FUN_00d11cb0();
                }
              }
              else {
                if (DAT_027f37d8 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
                local_60 = plVar3;
                local_58[0] = '\0';
                cVar5 = FUN_00c9ff50();
                if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar3 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
                if (cVar5 != '\0') {
                  local_58[0] = '\0';
                  local_60 = plVar2;
                  uVar11 = FUN_00d21140();
                  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
                    uVar11 = FUN_00d50b20();
                  }
                  FUN_00d1b5a0(uVar11,param_2);
                }
              }
            }
            if ((local_38[0] != '\0') && (local_98 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
      }
      lVar10 = lVar10 + 1;
      plVar2 = DAT_0277c878;
    } while (lVar10 < *(int *)(lVar1 + 0xc));
  }
  DAT_0277c878 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_58[0] = '\0';
  local_60 = plVar2;
  cVar5 = FUN_00c9ff50();
  uVar11 = extraout_XMM0_Da;
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  plVar3 = DAT_027f37d8;
  if (cVar5 == '\0') {
    if (DAT_027f37d8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_60 = plVar3;
    local_58[0] = '\0';
    cVar5 = FUN_00c9ff50();
    uVar11 = extraout_XMM0_Da_00;
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      uVar11 = FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      uVar11 = FUN_00d50b20();
    }
  }
  else {
    cVar5 = '\0';
  }
  if (plVar2 != (longlong *)0x0) {
    uVar11 = FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    local_90 = 1;
    local_98 = &DAT_024cc6f0;
    local_8c = *param_2;
    uVar11 = FUN_00d8cb40(uVar11,&local_98);
    plVar3 = local_70;
    plVar2 = DAT_0277c878;
    if (local_68 == '\0') {
      if (local_70 != (longlong *)0x0) {
        uVar11 = FUN_00d50b00();
        plVar2 = DAT_0277c878;
      }
    }
    else {
      local_68 = '\0';
    }
    DAT_0277c878 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      uVar11 = FUN_00d50b00();
    }
    local_58[0] = '\0';
    local_60 = plVar2;
    FUN_00ca0840(uVar11,&local_60);
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    *param_2 = *param_2 + 1;
  }
  return;
}


