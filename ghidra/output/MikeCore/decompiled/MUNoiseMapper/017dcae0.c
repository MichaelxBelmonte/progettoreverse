// Function: FUN_017dcae0
// Address: 017dcae0
// Size: 650 bytes
// Class: MUNoiseMapper
// String references:
//   "MUNoiseMapper"


/* WARNING: Removing unreachable block (ram,0x017dcbd2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_017dcae0(pthread_key_t param_1)

{
  longlong *plVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  longlong **pplVar5;
  int iVar6;
  longlong unaff_RDI;
  undefined8 unaff_R14;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  longlong local_38;
  
  cVar2 = FUN_017dc880();
  uVar7 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
  if (cVar2 != '\0') goto LAB_017dcd5c;
  lVar4 = *(longlong *)(unaff_RDI + 0x50);
  if (lVar4 == 0) {
    uVar7 = 0;
    goto LAB_017dcd5c;
  }
  FUN_00d50b00();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar8 = FUN_017dfc60();
  plVar1 = local_60;
  if (local_58 == '\0') {
    if (local_60 == (longlong *)0x0) goto LAB_017dcd1b;
    uVar8 = FUN_00d50b00();
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
LAB_017dcb96:
    local_38 = lVar4;
    local_58 = '\0';
    local_60 = (longlong *)0x0;
    local_50 = plVar1;
    local_48 = 0xffffffff;
    local_40 = 0;
    while( true ) {
      lVar4 = (longlong)(int)local_48;
      iVar6 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar6);
      if (*(int *)((longlong)local_50 + 0xc) <= iVar6) break;
      plVar1 = *(longlong **)(local_50[2] + 8 + lVar4 * 8);
      local_60 = plVar1;
      if ((DAT_027a7c10 == '\0') &&
         (iVar6 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_00, iVar6 != 0)) {
        _DAT_027a7b60 = FUN_01151de0();
        _DAT_027a7b48 = "MUNoiseMapper";
        _DAT_027a7b50 = 0x48;
        _DAT_027a7b58 = FUN_0117a1f0;
        _DAT_027a7b68 = 0;
        uRam00000000027a7b70 = 0;
        _DAT_027a7b78 = 0;
        uRam00000000027a7b80 = 0;
        _DAT_027a7b88 = 0;
        uRam00000000027a7b90 = 0;
        _DAT_027a7b98 = 0;
        uRam00000000027a7ba0 = 0;
        _DAT_027a7ba8 = 0;
        uRam00000000027a7bb0 = 0;
        _DAT_027a7bb8 = 0;
        uRam00000000027a7bc0 = 0;
        _DAT_027a7bc8 = 0;
        uRam00000000027a7bd0 = 0;
        _DAT_027a7bd8 = 0;
        uRam00000000027a7be0 = 0;
        _DAT_027a7be8 = 0;
        uRam00000000027a7bf0 = 0;
        _DAT_027a7bf8 = 0;
        uRam00000000027a7c00 = 0;
        _DAT_027a7c08 = 0;
        uVar8 = ___cxa_guard_release();
      }
      pplVar5 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar5 = &local_60;
        uVar8 = extraout_XMM0_Da;
        if (cVar2 == '\0') {
          pplVar5 = (longlong **)&DAT_02802688;
        }
      }
      if (*pplVar5 != (longlong *)0x0) {
        FUN_017dee80();
        uVar7 = 0x27a7b01;
        FUN_00d50b20();
        goto LAB_017dcd54;
      }
      iVar6 = local_48._4_4_;
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar6 = -local_48._4_4_;
        }
        else {
          local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
          uVar8 = FUN_00d23690(uVar8,local_48._4_4_);
          local_40 = local_40 + iVar6;
          iVar6 = 0;
        }
        local_48 = CONCAT44(iVar6,(int)local_48);
      }
    }
    FUN_017dee80();
    FUN_00d50b20();
    uVar7 = 0;
  }
  else {
    if (local_60 != (longlong *)0x0) goto LAB_017dcb96;
LAB_017dcd1b:
    uVar7 = 0;
  }
LAB_017dcd54:
  FUN_00d50b20();
LAB_017dcd5c:
  return uVar7 & 0xffffffff;
}


