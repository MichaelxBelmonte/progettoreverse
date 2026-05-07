// Function: FUN_01432ed0
// Address: 01432ed0
// Size: 1100 bytes
// Class: MUElementAnalyzer
// String references:
//   "MUElementAnalyzer"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01432ed0(void)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  longlong lVar7;
  longlong **pplVar8;
  int iVar9;
  longlong *unaff_RSI;
  undefined4 uVar10;
  longlong *local_90;
  undefined8 local_88;
  undefined1 local_80;
  longlong local_78;
  undefined8 local_70;
  int local_68;
  undefined8 *local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  undefined8 local_40;
  int local_38;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  uVar10 = (*DAT_02572370)();
  if (*unaff_RSI != 0) {
    local_80 = 0;
    local_88 = 0;
    local_70 = 0xffffffff;
    local_68 = 0;
    iVar9 = 0;
    local_78 = *unaff_RSI;
    local_60 = puVar3;
    while( true ) {
      if (iVar9 != 0) {
        if (iVar9 < 1) {
          iVar9 = -iVar9;
        }
        else {
          local_70 = CONCAT44(local_70._4_4_,(int)local_70 - iVar9);
          FUN_00d23690(uVar10,iVar9);
          local_68 = local_68 + iVar9;
          iVar9 = 0;
        }
        local_70 = CONCAT44(iVar9,(int)local_70);
      }
      lVar4 = (longlong)(int)local_70;
      iVar9 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar9);
      if (*(int *)(local_78 + 0xc) <= iVar9) break;
      lVar7 = *(longlong *)(local_78 + 0x10);
      local_88 = *(undefined8 *)(lVar7 + 8 + lVar4 * 8);
      pvVar5 = _pthread_getspecific((pthread_key_t)lVar7);
      pVar6 = (pthread_key_t)lVar7;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar10 = FUN_01266fe0();
      plVar1 = local_58;
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        uVar10 = FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        pvVar5 = _pthread_getspecific(pVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar10 = FUN_0126ef70();
        plVar1 = local_58;
        if (local_50 == '\0') {
          if (local_58 != (longlong *)0x0) {
            FUN_00d50b00();
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_014330a0;
          }
        }
        else if (local_58 != (longlong *)0x0) {
LAB_014330a0:
          local_50 = '\0';
          local_58 = plVar1;
          cVar2 = FUN_00d24090();
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar2 == '\0') {
            local_50 = '\0';
            local_58 = plVar1;
            FUN_00d21140();
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pvVar5 = _pthread_getspecific(pVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0124e0d0();
            plVar1 = local_58;
            if (local_50 == '\0') {
              if (local_58 != (longlong *)0x0) {
                FUN_00d50b00();
                if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_01433172;
              }
            }
            else if (local_58 != (longlong *)0x0) {
LAB_01433172:
              local_50 = '\0';
              local_58 = (longlong *)0x0;
              local_48 = plVar1;
              local_40 = 0xffffffff;
              local_38 = 0;
              local_40._4_4_ = 0;
              while( true ) {
                if (local_40._4_4_ != 0) {
                  if (local_40._4_4_ < 1) {
                    iVar9 = -local_40._4_4_;
                  }
                  else {
                    iVar9 = (int)local_40 - local_40._4_4_;
                    local_40 = CONCAT44(local_40._4_4_,iVar9);
                    FUN_00d23690();
                    local_38 = local_38 + local_40._4_4_;
                    iVar9 = 0;
                  }
                  local_40 = CONCAT44(iVar9,(int)local_40);
                }
                lVar4 = (longlong)(int)local_40;
                iVar9 = (int)local_40 + 1;
                local_40 = CONCAT44(local_40._4_4_,iVar9);
                if (*(int *)((longlong)local_48 + 0xc) <= iVar9) break;
                plVar1 = *(longlong **)(local_48[2] + 8 + lVar4 * 8);
                local_58 = plVar1;
                local_90 = plVar1;
                if ((DAT_026e0c38 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
                  _DAT_026e0b88 = FUN_000fddb0();
                  _DAT_026e0b70 = "MUElementAnalyzer";
                  _DAT_026e0b78 = 0x180;
                  _DAT_026e0b80 = FUN_000fdd80;
                  _DAT_026e0b90 = 0;
                  uRam00000000026e0b98 = 0;
                  _DAT_026e0ba0 = 0;
                  _DAT_026e0c18 = 0;
                  uRam00000000026e0c20 = 0;
                  _DAT_026e0c28 = 0;
                  DAT_026e0c2a = 1;
                  _DAT_026e0ba8 = 0;
                  uRam00000000026e0bb0 = 0;
                  _DAT_026e0bb8 = 0;
                  uRam00000000026e0bc0 = 0;
                  _DAT_026e0bc8 = 0;
                  uRam00000000026e0bd0 = 0;
                  _DAT_026e0bd8 = 0;
                  uRam00000000026e0be0 = 0;
                  _DAT_026e0be8 = 0;
                  uRam00000000026e0bf0 = 0;
                  _DAT_026e0bf8 = 0;
                  uRam00000000026e0c00 = 0;
                  _DAT_026e0c08 = 0;
                  uRam00000000026e0c10 = 0;
                  DAT_026e0c33 = 0;
                  _DAT_026e0c2b = 0;
                  ___cxa_guard_release();
                }
                pplVar8 = (longlong **)&DAT_02802688;
                if (plVar1 != (longlong *)0x0) {
                  (**(code **)(*plVar1 + 0x360))();
                  cVar2 = FUN_00e85ea0();
                  pplVar8 = &local_90;
                  if (cVar2 == '\0') {
                    pplVar8 = (longlong **)&DAT_02802688;
                  }
                }
                if (*pplVar8 != (longlong *)0x0) {
                  FUN_00e34b50();
                }
              }
              FUN_00713bd0();
              FUN_00d50b20();
            }
          }
          uVar10 = FUN_00d50b20();
        }
      }
      iVar9 = local_70._4_4_;
    }
    FUN_001159b0();
    if (local_60 == (undefined8 *)0x0) {
      return;
    }
  }
  FUN_00d50b20();
  return;
}


