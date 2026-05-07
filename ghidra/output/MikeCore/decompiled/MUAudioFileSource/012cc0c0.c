// Function: FUN_012cc0c0
// Address: 012cc0c0
// Size: 2050 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"


/* WARNING: Removing unreachable block (ram,0x012cc2e6) */
/* WARNING: Removing unreachable block (ram,0x012cc7fd) */
/* WARNING: Removing unreachable block (ram,0x012cc80d) */
/* WARNING: Removing unreachable block (ram,0x012cc3b0) */
/* WARNING: Removing unreachable block (ram,0x012cc3c0) */
/* WARNING: Removing unreachable block (ram,0x012cc744) */
/* WARNING: Removing unreachable block (ram,0x012cc750) */
/* WARNING: Removing unreachable block (ram,0x012cc197) */
/* WARNING: Removing unreachable block (ram,0x012cc1c0) */
/* WARNING: Removing unreachable block (ram,0x012cc199) */
/* WARNING: Removing unreachable block (ram,0x012cc1c2) */
/* WARNING: Removing unreachable block (ram,0x012cc517) */
/* WARNING: Removing unreachable block (ram,0x012cc540) */
/* WARNING: Removing unreachable block (ram,0x012cc519) */
/* WARNING: Removing unreachable block (ram,0x012cc542) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012cc0c0(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong **pplVar8;
  int iVar9;
  longlong unaff_RDI;
  longlong *plVar10;
  longlong *plVar11;
  float fVar12;
  float fVar13;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 *local_98;
  int local_70;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  undefined8 local_40;
  int local_38;
  
  local_a0 = param_4;
  local_9c = param_3;
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  lVar1 = *(longlong *)(unaff_RDI + 0x48);
  local_98 = puVar4;
  if (lVar1 != 0) {
    local_70 = -1;
LAB_012cc193:
    do {
      lVar5 = (longlong)local_70;
      local_70 = local_70 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_70) goto LAB_012cc474;
      plVar10 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + 8 + lVar5 * 8);
      local_58 = plVar10;
      if ((DAT_026fdd70 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
        _DAT_026e3238 = FUN_00115af0();
        DAT_026e3220 = "MUAudioFileSource";
        _DAT_026e3228 = 0xa0;
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
      pplVar8 = (longlong **)&DAT_02802688;
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar8 = &local_58;
        if (cVar3 == '\0') {
          pplVar8 = (longlong **)&DAT_02802688;
        }
      }
      if (*pplVar8 != (longlong *)0x0) {
        pvVar6 = _pthread_getspecific((pthread_key_t)pplVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0124c6e0();
        plVar10 = local_58;
        if (local_50 == '\0') {
          if (local_58 == (longlong *)0x0) goto LAB_012cc193;
          FUN_00d50b00();
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (local_58 == (longlong *)0x0) goto LAB_012cc193;
        local_50 = '\0';
        local_58 = (longlong *)0x0;
        local_48 = plVar10;
        local_40 = 0xffffffff;
        local_38 = 0;
        while( true ) {
          lVar5 = (longlong)(int)local_40;
          iVar9 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar9);
          if (*(int *)((longlong)local_48 + 0xc) <= iVar9) break;
          local_58 = *(longlong **)(local_48[2] + 8 + lVar5 * 8);
          pvVar6 = _pthread_getspecific((pthread_key_t)local_48[2]);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_01397570();
          if (cVar3 != '\0') {
            FUN_00d235a0();
            break;
          }
          if (local_40._4_4_ != 0) {
            if (local_40._4_4_ < 1) {
              iVar9 = -local_40._4_4_;
            }
            else {
              local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
              FUN_00d23690();
              local_38 = local_38 + local_40._4_4_;
              iVar9 = 0;
            }
            local_40 = CONCAT44(iVar9,(int)local_40);
          }
        }
        FUN_00115190();
        FUN_00d50b20();
      }
    } while( true );
  }
LAB_012cc48b:
  if (*(int *)((longlong)local_98 + 0xc) == 0) {
    lVar1 = *(longlong *)(unaff_RDI + 0x48);
    fVar13 = DAT_02390124;
  }
  else {
    fVar13 = DAT_02390124 / (float)*(int *)((longlong)local_98 + 0xc);
    lVar1 = *(longlong *)(unaff_RDI + 0x48);
  }
  if (lVar1 != 0) {
    local_70 = -1;
    fVar12 = 0.0;
    while( true ) {
      lVar5 = (longlong)local_70;
      local_70 = local_70 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_70) break;
      plVar10 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + 8 + lVar5 * 8);
      local_58 = plVar10;
      if ((DAT_026fdd70 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
        _DAT_026e3238 = FUN_00115af0();
        DAT_026e3220 = "MUAudioFileSource";
        _DAT_026e3228 = 0xa0;
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
      pplVar8 = (longlong **)&DAT_02802688;
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar8 = &local_58;
        if (cVar3 == '\0') {
          pplVar8 = (longlong **)&DAT_02802688;
        }
      }
      if (*pplVar8 != (longlong *)0x0) {
        local_50 = '\0';
        local_58 = plVar10;
        cVar3 = FUN_00d24090();
        pVar7 = (pthread_key_t)pplVar8;
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((cVar3 == '\0') || (*param_1 == 0)) {
          plVar11 = (longlong *)0x0;
          bVar2 = false;
        }
        else {
          FUN_00df4f00(fVar12,fVar13 + fVar12);
          plVar11 = local_58 + 2;
          if (local_58 == (longlong *)0x0) {
            bVar2 = false;
            plVar11 = (longlong *)0x0;
          }
          else if (local_50 == '\0') {
            (**(code **)(*plVar11 + 0x10))();
            FUN_00d50b00();
            bVar2 = true;
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_50 = '\0';
            bVar2 = true;
          }
        }
        pvVar6 = _pthread_getspecific(pVar7);
        if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          plVar10 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
        }
        local_c0 = (longlong *)*param_2;
        local_b8 = '\0';
        local_a8 = '\0';
        local_b0 = plVar11;
        (**(code **)(*plVar10 + 0x488))
                  (&local_b0,&local_c0,(undefined1)local_9c,(undefined1)local_a0);
        if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
          (**(code **)(*local_b0 + 0x10))();
          FUN_00d50b20();
        }
        if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
          (**(code **)(*local_c0 + 0x10))();
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          fVar12 = fVar12 + fVar13;
        }
        if ((bVar2) && (plVar11 != (longlong *)0x0)) {
          (**(code **)(*plVar11 + 0x10))();
          FUN_00d50b20();
        }
      }
    }
    FUN_00136d50();
    if (local_98 == (undefined8 *)0x0) {
      return;
    }
  }
  FUN_00d50b20();
  return;
LAB_012cc474:
  FUN_00136d50();
  goto LAB_012cc48b;
}


