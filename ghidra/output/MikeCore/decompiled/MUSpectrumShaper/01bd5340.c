// Function: FUN_01bd5340
// Address: 01bd5340
// Size: 1170 bytes
// Class: MUSpectrumShaper


/* WARNING: Removing unreachable block (ram,0x01bd5393) */
/* WARNING: Removing unreachable block (ram,0x01bd539f) */
/* WARNING: Removing unreachable block (ram,0x01bd55f1) */
/* WARNING: Removing unreachable block (ram,0x01bd55fa) */
/* WARNING: Removing unreachable block (ram,0x01bd5407) */
/* WARNING: Removing unreachable block (ram,0x01bd5430) */
/* WARNING: Removing unreachable block (ram,0x01bd5409) */
/* WARNING: Removing unreachable block (ram,0x01bd5432) */

void FUN_01bd5340(void)

{
  longlong *plVar1;
  dword *pdVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  void *pvVar6;
  dword *pdVar7;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  int iVar8;
  longlong local_80;
  char local_78;
  int local_50;
  longlong local_40;
  char local_38;
  
  if ((*unaff_RSI == 0) ||
     (cVar5 = (**(code **)(**(longlong **)(unaff_RDI + 0x78) + 0x50))(), cVar5 == '\0')) {
    lVar3 = *(longlong *)(unaff_RDI + 0x78);
    if (*(int *)(lVar3 + 0xc) != 0) {
      local_50 = -1;
      plVar1 = (longlong *)(unaff_RDI + 0x70);
      while (local_50 = local_50 + 1, local_50 < *(int *)(lVar3 + 0xc)) {
        pvVar6 = _pthread_getspecific((pthread_key_t)*(undefined8 *)(lVar3 + 0x10));
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        (**(code **)(*plVar1 + 0x10))();
        FUN_00d50b00();
        FUN_000823a0();
        FUN_00e86210();
        lVar4 = DAT_026f6f60;
        if (DAT_026f6f60 != 0) {
          FUN_00d50b00();
        }
        FUN_00c841b0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00e8b9a0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))();
          FUN_00d50b20();
        }
      }
      FUN_000be170();
    }
    FUN_00d243f0();
    lVar3 = *(longlong *)(unaff_RDI + 0x78);
    if (*(int *)(lVar3 + 0xc) != 0) {
      if (0 < *(int *)(lVar3 + 0xc)) {
        pdVar2 = (dword *)(unaff_RDI + 0x70);
        iVar8 = 0;
        pdVar7 = pdVar2;
        do {
          pvVar6 = _pthread_getspecific((pthread_key_t)pdVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          (**(code **)(*(longlong *)pdVar2 + 0x10))();
          FUN_00d50b00();
          FUN_000823a0();
          FUN_00e86210();
          lVar4 = DAT_026f6f60;
          if (DAT_026f6f60 != 0) {
            FUN_00d50b00();
          }
          FUN_00c841b0();
          local_78 = 0;
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_78 = '\x01';
          local_80 = local_40;
          pdVar7 = &section_00000068.reloff;
          FUN_00e8b850(0xa0,&local_80);
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          if (pdVar2 != (dword *)0x0) {
            (**(code **)(*(longlong *)pdVar2 + 0x10))();
            FUN_00d50b20();
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(lVar3 + 0xc));
      }
      FUN_000be170();
    }
    FUN_01bd7b90();
  }
  else {
    FUN_01bd69c0();
  }
  return;
}


