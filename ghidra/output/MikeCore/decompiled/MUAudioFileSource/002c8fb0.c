// Function: FUN_002c8fb0
// Address: 002c8fb0
// Size: 1114 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"


/* WARNING: Removing unreachable block (ram,0x002c93e7) */
/* WARNING: Removing unreachable block (ram,0x002c93f0) */
/* WARNING: Removing unreachable block (ram,0x002c9047) */
/* WARNING: Removing unreachable block (ram,0x002c9070) */
/* WARNING: Removing unreachable block (ram,0x002c9049) */
/* WARNING: Removing unreachable block (ram,0x002c9072) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002c8fb0(void)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  void *pvVar7;
  undefined8 *puVar8;
  char *pcVar9;
  longlong **pplVar10;
  longlong *unaff_RSI;
  undefined *puVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined *local_98;
  int local_60;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  pcVar2 = DAT_02572370;
  (*DAT_02572370)();
  lVar12 = *unaff_RSI;
  puVar11 = &DAT_02572358;
  if (lVar12 != 0) {
    local_98 = &DAT_02572358;
    local_60 = -1;
    while( true ) {
      lVar6 = (longlong)local_60;
      local_60 = local_60 + 1;
      if (*(int *)(lVar12 + 0xc) <= local_60) break;
      plVar1 = *(longlong **)(*(longlong *)(lVar12 + 0x10) + 8 + lVar6 * 8);
      local_48 = plVar1;
      FUN_0006e1c0();
      pplVar10 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar10 = &local_48;
        if (cVar3 == '\0') {
          pplVar10 = (longlong **)&DAT_02802688;
        }
      }
      if (*pplVar10 != (longlong *)0x0) {
        pvVar7 = _pthread_getspecific((pthread_key_t)pplVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0126ef70();
        plVar1 = local_48;
        if ((DAT_026fdd70 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
        pplVar10 = (longlong **)&DAT_02802688;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar10 = &local_48;
          if (cVar3 == '\0') {
            pplVar10 = (longlong **)&DAT_02802688;
          }
        }
        plVar1 = *pplVar10;
        local_38[0] = *(char *)(pplVar10 + 1);
        pplVar10 = pplVar10 + 1;
        if (local_38[0] == '\0') {
          pplVar10 = (longlong **)local_38;
        }
        *(undefined1 *)pplVar10 = 0;
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          local_40[0] = '\0';
          local_48 = plVar1;
          FUN_00d235a0();
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
        }
      }
    }
    FUN_002d7220();
    puVar11 = local_98;
  }
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = puVar11;
  uVar13 = (*pcVar2)();
  if (puVar5 != (undefined8 *)0x0) {
    if (0 < *(int *)((longlong)puVar5 + 0xc)) {
      lVar12 = 0;
      do {
        local_a8 = *(undefined8 *)(puVar5[2] + lVar12 * 8);
        local_a0 = 0;
        uVar13 = FUN_002c95a0(uVar13,&local_a8);
        plVar1 = local_48;
        local_38[0] = local_40[0];
        pcVar9 = local_40;
        if (local_40[0] == '\0') {
          pcVar9 = local_38;
        }
        *pcVar9 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          local_40[0] = '\0';
          local_48 = plVar1;
          uVar13 = FUN_00d21140();
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            uVar13 = FUN_00d50b20();
          }
          if (local_38[0] != '\0') {
            uVar13 = FUN_00d50b20();
          }
        }
        lVar12 = lVar12 + 1;
      } while ((int)lVar12 < *(int *)((longlong)puVar5 + 0xc));
    }
    FUN_002d7290();
  }
  if (*(int *)((longlong)puVar8 + 0xc) != 0) {
    FUN_01d2c5c0();
  }
  FUN_00d50b20();
  if (puVar5 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


