// Function: FUN_012cb710
// Address: 012cb710
// Size: 1372 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"


/* WARNING: Removing unreachable block (ram,0x012cbb00) */
/* WARNING: Removing unreachable block (ram,0x012cbb09) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_012cb710(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  void *pvVar4;
  longlong *plVar5;
  pthread_key_t pVar6;
  code *pcVar7;
  int iVar8;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar9;
  longlong **pplVar10;
  longlong local_a8;
  char local_a0;
  longlong *local_70;
  char local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  
  local_38 = param_2;
  if (*param_2 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    if (*(longlong *)(unaff_RSI + 0x48) == 0) {
      bVar1 = false;
      plVar9 = (longlong *)0x0;
    }
    else {
      local_68 = '\0';
      local_70 = (longlong *)0x0;
      local_60 = *(longlong *)(unaff_RSI + 0x48);
      local_58 = 0xffffffff;
      local_50 = 0;
      bVar1 = false;
      plVar9 = (longlong *)0x0;
      local_58._4_4_ = 0;
      while( true ) {
        if (local_58._4_4_ != 0) {
          if (local_58._4_4_ < 1) {
            iVar8 = -local_58._4_4_;
          }
          else {
            iVar8 = (int)local_58 - local_58._4_4_;
            local_58 = CONCAT44(local_58._4_4_,iVar8);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar8 = 0;
          }
          local_58 = CONCAT44(iVar8,(int)local_58);
        }
        lVar3 = (longlong)(int)local_58;
        iVar8 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar8);
        if (*(int *)(local_60 + 0xc) <= iVar8) break;
        pcVar7 = *(code **)(local_60 + 0x10);
        plVar5 = *(longlong **)(pcVar7 + lVar3 * 8 + 8);
        local_70 = plVar5;
        if ((DAT_026fdd70 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
          _DAT_026e3238 = FUN_00115af0();
          DAT_026e3220 = "MUAudioFileSource";
          _DAT_026e3228 = 0xa0;
          pcVar7 = FUN_00136df0;
          _DAT_026e3230 = FUN_00136df0;
          _DAT_026e3240 = 0;
          uRam00000000026e3248 = 0;
          _DAT_026e3250 = 0;
          uRam00000000026e3258 = 0;
          _DAT_026e3260 = 0;
          uRam00000000026e3268 = 0;
          _DAT_026e3270 = 0;
          uRam00000000026e3278 = 0;
          _DAT_026e3280 = 0;
          uRam00000000026e3288 = 0;
          _DAT_026e3290 = 0;
          uRam00000000026e3298 = 0;
          _DAT_026e32a0 = 0;
          uRam00000000026e32a8 = 0;
          _DAT_026e32b0 = 0;
          uRam00000000026e32b8 = 0;
          _DAT_026e32c0 = 0;
          uRam00000000026e32c8 = 0;
          _DAT_026e32d0 = 0;
          uRam00000000026e32d8 = 0;
          _DAT_026e32e0 = 0;
          ___cxa_guard_release();
        }
        pVar6 = (pthread_key_t)pcVar7;
        pplVar10 = (longlong **)&DAT_02802688;
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x360))();
          cVar2 = FUN_00e85ea0();
          pplVar10 = &local_70;
          if (cVar2 == '\0') {
            pplVar10 = (longlong **)&DAT_02802688;
          }
        }
        plVar5 = *pplVar10;
        if (plVar5 == plVar9) {
          if ((!bVar1) && (plVar5 != (longlong *)0x0)) {
            plVar5 = plVar9;
            if (*(char *)(pplVar10 + 1) != '\0') goto LAB_012cb865;
            bVar1 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (*(char *)(pplVar10 + 1) == '\0') {
            if (plVar5 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            if ((bVar1) && (plVar9 != (longlong *)0x0)) {
              FUN_00d50b20();
              plVar9 = plVar5;
              bVar1 = true;
              goto LAB_012cb8c0;
            }
          }
          else {
            if ((bVar1) && (plVar9 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_012cb865:
            *(undefined1 *)(pplVar10 + 1) = 0;
          }
          plVar9 = plVar5;
          bVar1 = true;
        }
LAB_012cb8c0:
        if (plVar9 != (longlong *)0x0) {
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0123b100();
          lVar3 = *local_38;
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          if (local_a8 == lVar3) {
            *(undefined1 *)(unaff_RDI + 1) = 0;
            if (!bVar1) {
              FUN_00d50b00();
            }
            *unaff_RDI = plVar9;
            *(undefined1 *)(unaff_RDI + 1) = 1;
            FUN_00115e00();
            return unaff_RDI;
          }
        }
      }
      FUN_00115e00();
    }
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_00115cd0();
    pVar6 = 0x25ccea8;
    *plVar5 = (longlong)&DAT_025ccea8;
    plVar5[0x13] = 0;
    plVar5[0xd] = 0;
    plVar5[0xe] = 0;
    plVar5[0xf] = 0;
    plVar5[0x10] = 0;
    *(undefined8 *)((longlong)plVar5 + 0x84) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x8c) = 0;
    (*DAT_025ccec0)();
    if (plVar5 == plVar9) {
      plVar5 = plVar9;
      if (bVar1) {
        FUN_00d50b20();
      }
    }
    else if ((bVar1) && (plVar9 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123b010();
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00b88600();
    local_48 = local_70;
    local_40 = 0;
    if (local_68 == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    local_40 = '\x01';
    FUN_0123ab70();
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123af90();
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00b7a710();
    FUN_0123afd0();
    FUN_012cb4b0();
    pvVar4 = _pthread_getspecific(pVar6);
    plVar9 = plVar5;
    if ((pvVar4 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      plVar9 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar9 + 0x3d0))();
    *unaff_RDI = plVar5;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return unaff_RDI;
}


