// Function: FUN_001221b0
// Address: 001221b0
// Size: 955 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

uint64_t FUN_001221b0(void* param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t **pplVar5;
  int iVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  int iVar9;
  uint32_t uVar10;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  int local_50;
  uint uStack_4c;
  int local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_00757c60();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar10 = FUN_012cb480();
  plVar7 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != (int64_t *)0x0) && (uVar10 = FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (int64_t *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar10 = FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    local_60 = 0;
    local_68 = (int64_t *)0x0;
    local_58 = (int64_t)plVar7;
    local_50 = -1;
    uStack_4c = 0;
    local_48 = 0;
    uVar8 = 0;
    do {
      iVar6 = (int)uVar8;
      if (iVar6 != 0) {
        if (iVar6 < 1) {
          uVar8 = (uint64_t)(uint)-iVar6;
        }
        else {
          local_50 = local_50 - iVar6;
          uVar10 = FUN_00d23690(uVar10,uVar8);
          local_48 = local_48 + iVar6;
          uVar8 = 0;
        }
        uStack_4c = (uint)uVar8;
      }
      lVar4 = (int64_t)local_50;
      iVar9 = local_50 + 1;
      iVar6 = *(int *)(local_58 + 0xc);
      local_50 = iVar9;
      if (iVar6 <= iVar9) goto LAB_00122548;
      plVar7 = *(int64_t **)(*(int64_t *)(local_58 + 0x10) + 8 + lVar4 * 8);
      local_40 = plVar7;
      local_68 = plVar7;
      if ((g_026fdd70 == '\0') &&
         (iVar2 = ___cxa_guard_acquire(), uVar10 = extraout_XMM0_Da_01, iVar2 != 0)) {
        g_026e3238 = FUN_00115af0();
        g_026e3220 = "MUAudioFileSource";
        g_026e3228 = 0xa0;
        g_026e3230 = FUN_00136df0;
        g_026e3240 = 0;
        ram_00000000026e3248 = 0;
        g_026e3250 = 0;
        ram_00000000026e3258 = 0;
        g_026e3260 = 0;
        ram_00000000026e3268 = 0;
        g_026e3270 = 0;
        ram_00000000026e3278 = 0;
        g_026e3280 = 0;
        ram_00000000026e3288 = 0;
        g_026e3290 = 0;
        ram_00000000026e3298 = 0;
        g_026e32a0 = 0;
        ram_00000000026e32a8 = 0;
        g_026e32b0 = 0;
        ram_00000000026e32b8 = 0;
        g_026e32c0 = 0;
        ram_00000000026e32c8 = 0;
        g_026e32d0 = 0;
        ram_00000000026e32d8 = 0;
        g_026e32e0 = 0;
        uVar10 = ___cxa_guard_release();
      }
      pplVar5 = (int64_t **)&g_02802688;
      if (plVar7 != (int64_t *)0x0) {
        (**(code **)(*plVar7 + 0x360))();
        cVar1 = FUN_00e85ea0();
        pplVar5 = &local_40;
        uVar10 = extraout_XMM0_Da;
        if (cVar1 == '\0') {
          pplVar5 = (int64_t **)&g_02802688;
        }
      }
      plVar7 = local_68;
      if (*pplVar5 != (int64_t *)0x0) {
        pvVar3 = _pthread_getspecific((void*)pplVar5);
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          plVar7 = (int64_t *)plVar7[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar7 + 0x478))();
        cVar1 = (**(code **)(*local_40 + 0x50))();
        uVar10 = extraout_XMM0_Da_00;
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          uVar10 = FUN_00d50b20();
        }
        lVar4 = g_027259a0;
        if (cVar1 != '\0') goto LAB_001224b6;
      }
      uVar8 = (uint64_t)uStack_4c;
    } while( true );
  }
  uVar8 = 1;
LAB_00122563:
  return uVar8 & 0xffffffff;
LAB_001224b6:
  if (g_027259a0 != 0) {
    uVar10 = FUN_00d50b00();
  }
  uVar8 = g_026e18b0;
  if (g_026e18b0 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_78 = uVar8;
  local_70 = '\x01';
  FUN_01f6ca30(uVar10,&local_78);
  (**(code **)(*local_40 + 0x5e0))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00122548:
  FUN_00136d50();
  uVar8 = CONCAT71((int7)(uVar8 >> 8),iVar6 <= iVar9);
  FUN_00d50b20();
  goto LAB_00122563;
}

