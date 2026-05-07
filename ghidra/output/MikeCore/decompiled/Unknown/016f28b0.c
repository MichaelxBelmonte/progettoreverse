// Function: FUN_016f28b0
// Address: 016f28b0
// Size: 792 bytes
// Class: Unknown


void FUN_016f28b0(void)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  void *pvVar4;
  ulonglong uVar5;
  pthread_key_t pVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong unaff_RDI;
  pthread_key_t pVar9;
  longlong local_b0;
  char local_a8;
  undefined8 local_40;
  char local_38;
  
  lVar3 = *(longlong *)(unaff_RDI + 0x60);
  if (0 < *(int *)(lVar3 + 0xc)) {
    bVar2 = false;
    pVar9 = 0;
    do {
      lVar7 = (longlong)(int)pVar9;
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + lVar7 * 8);
      pVar6 = pVar9;
      if (lVar3 != 0) {
        FUN_00d50b00();
        pVar6 = (pthread_key_t)lVar7;
      }
      pvVar4 = _pthread_getspecific(pVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01909dc0();
      pvVar4 = _pthread_getspecific(pVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar7 = FUN_0165cf20(0,0);
      FUN_00e7c860();
      uVar5 = FUN_00e7cc50();
      plVar8 = *(longlong **)(*(longlong *)(unaff_RDI + 0x60) + 0x10);
      local_40._4_4_ = (int)((ulonglong)lVar7 >> 0x20);
      if (*plVar8 == lVar3) {
        FUN_00e7c860();
        uVar5 = FUN_00e7cc50();
        if (uVar5 >> 0x20 != 0) goto LAB_016f29f5;
LAB_016f2a10:
        pVar6 = (pthread_key_t)plVar8;
        uVar5 = FUN_016f51d0();
        if (uVar5 >> 0x20 == 0) {
LAB_016f2a53:
          local_40 = lVar7;
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0165d690();
          FUN_016da710();
          if ((local_a8 != '\0') && (local_b0 != 0)) {
            FUN_00d50b20();
          }
          FUN_016ec340();
          FUN_016f56f0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 != 0) {
            FUN_016f56f0();
            if ((local_38 == '\0') && (local_40 != 0)) {
              FUN_00d50b00();
            }
            FUN_016fa090();
            if (local_40 != 0) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_40 = CONCAT44(local_40._4_4_,3);
          cVar1 = FUN_00e7c6b0();
          lVar7 = local_40;
          if (cVar1 != '\0') goto LAB_016f2a53;
          FUN_016d7fb0();
          pVar9 = pVar9 - 1;
        }
        bVar2 = true;
      }
      else {
        if (uVar5 >> 0x20 == 0) goto LAB_016f2a10;
LAB_016f29f5:
        if ((local_40._4_4_ == 0) || (cVar1 = FUN_00e7c000(), cVar1 == '\0')) goto LAB_016f2a10;
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      pVar9 = pVar9 + 1;
      lVar3 = *(longlong *)(unaff_RDI + 0x60);
    } while ((int)pVar9 < *(int *)(lVar3 + 0xc));
    if (bVar2) {
      FUN_016d63b0();
    }
  }
  return;
}


