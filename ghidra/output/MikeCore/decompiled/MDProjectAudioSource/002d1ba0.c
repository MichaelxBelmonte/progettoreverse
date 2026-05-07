// Function: FUN_002d1ba0
// Address: 002d1ba0
// Size: 1059 bytes
// Class: MDProjectAudioSource
// String references:
//   "MDProjectAudioSource"


/* WARNING: Removing unreachable block (ram,0x002d1f9e) */
/* WARNING: Removing unreachable block (ram,0x002d1faa) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_002d1ba0(void)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong **pplVar6;
  int iVar7;
  undefined8 *unaff_RSI;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 uVar10;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  undefined8 local_68;
  int local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  
  (**(code **)(*(longlong *)*unaff_RSI + 0x3f8))();
  plVar8 = local_80;
  if ((((local_78 == '\0') && (local_80 != (longlong *)0x0)) && (FUN_00d50b00(), local_78 != '\0'))
     && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_02572358;
  uVar10 = (*DAT_02572370)();
  if (plVar8 != (longlong *)0x0) {
    local_78 = '\0';
    local_80 = (longlong *)0x0;
    local_38 = plVar8;
    local_70 = plVar8;
    local_68 = 0xffffffff;
    local_60 = 0;
    local_68._4_4_ = 0;
    while( true ) {
      if (local_68._4_4_ != 0) {
        if (local_68._4_4_ < 1) {
          iVar7 = -local_68._4_4_;
        }
        else {
          iVar7 = (int)local_68 - local_68._4_4_;
          local_68 = CONCAT44(local_68._4_4_,iVar7);
          FUN_00d23690();
          local_60 = local_60 + local_68._4_4_;
          iVar7 = 0;
        }
        local_68 = CONCAT44(iVar7,(int)local_68);
      }
      lVar3 = (longlong)(int)local_68;
      iVar7 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar7);
      if (*(int *)((longlong)local_70 + 0xc) <= iVar7) break;
      plVar8 = *(longlong **)(local_70[2] + 8 + lVar3 * 8);
      local_58 = plVar8;
      local_80 = plVar8;
      if ((DAT_026fd0a8 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
        _DAT_026fcff8 = FUN_00d4fe50();
        _DAT_026fcfe0 = "MDProjectAudioSource";
        _DAT_026fcfe8 = 0x28;
        _DAT_026fcff0 = FUN_002d5b80;
        _DAT_026fd000 = 0;
        uRam00000000026fd008 = 0;
        _DAT_026fd010 = 0;
        _DAT_026fd088 = 0;
        uRam00000000026fd090 = 0;
        _DAT_026fd098 = 0;
        DAT_026fd09a = 1;
        _DAT_026fd018 = 0;
        uRam00000000026fd020 = 0;
        _DAT_026fd028 = 0;
        uRam00000000026fd030 = 0;
        _DAT_026fd038 = 0;
        uRam00000000026fd040 = 0;
        _DAT_026fd048 = 0;
        uRam00000000026fd050 = 0;
        _DAT_026fd058 = 0;
        uRam00000000026fd060 = 0;
        _DAT_026fd068 = 0;
        uRam00000000026fd070 = 0;
        _DAT_026fd078 = 0;
        uRam00000000026fd080 = 0;
        DAT_026fd0a3 = 0;
        _DAT_026fd09b = 0;
        ___cxa_guard_release();
      }
      pplVar6 = (longlong **)&DAT_02802688;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x360))();
        cVar1 = FUN_00e85ea0();
        pplVar6 = &local_58;
        if (cVar1 == '\0') {
          pplVar6 = (longlong **)&DAT_02802688;
        }
      }
      plVar8 = local_80;
      if (*pplVar6 != (longlong *)0x0) {
        if (local_80[3] == 0) {
          plVar9 = (longlong *)local_80[2];
          pvVar4 = _pthread_getspecific((pthread_key_t)pplVar6);
          pVar5 = (pthread_key_t)pplVar6;
          if (pvVar4 != (void *)0x0) {
            plVar9 = (longlong *)plVar8[2];
            lVar3 = FUN_00e8b990();
            if (lVar3 != 0) {
              plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
            }
          }
          (**(code **)(*plVar9 + 0x478))();
        }
        else {
          FUN_00b88600();
          pVar5 = (pthread_key_t)pplVar6;
        }
        plVar8 = local_58;
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar9 = local_80;
        if (plVar8 != (longlong *)0x0) {
          if (local_80[3] == 0) {
            plVar8 = (longlong *)local_80[2];
            pvVar4 = _pthread_getspecific(pVar5);
            if (pvVar4 != (void *)0x0) {
              plVar8 = (longlong *)plVar9[2];
              lVar3 = FUN_00e8b990();
              if (lVar3 != 0) {
                plVar8 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
              }
            }
            (**(code **)(*plVar8 + 0x478))();
          }
          else {
            FUN_00b88600();
          }
          plVar8 = local_58;
          local_40 = 0;
          if (local_50 == '\0') {
            if (local_58 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          local_40 = '\x01';
          local_48 = plVar8;
          FUN_00d21140();
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    uVar10 = FUN_002d74d0();
    plVar8 = local_38;
  }
  lVar3 = DAT_026fcec0;
  iVar7 = *(int *)((longlong)puVar2 + 0xc);
  if (iVar7 != 0) {
    if (DAT_026fcec0 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_90 = lVar3;
    local_88 = '\x01';
    FUN_01cac7f0(uVar10,&local_90);
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return iVar7 != 0;
}


