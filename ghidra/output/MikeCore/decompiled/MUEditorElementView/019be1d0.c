// Function: FUN_019be1d0
// Address: 019be1d0
// Size: 531 bytes
// Class: MUEditorElementView


void FUN_019be1d0(undefined4 param_1)

{
  char cVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  char *pcVar4;
  longlong *unaff_RDI;
  longlong lVar5;
  double dVar6;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar7 [16];
  longlong local_50;
  char local_48 [8];
  double local_40;
  char local_38 [8];
  
  (**(code **)(*unaff_RDI + 0xe20))();
  if (local_50 != 0) {
    if (((local_48[0] == '\0') && (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((*(int *)(local_50 + 0xc) != 0) && (unaff_RDI[0x69] != 0)) {
      FUN_00d23310();
      pVar3 = CONCAT31((int3)((uint)param_1 >> 8),local_48[0]);
      pcVar4 = local_38;
      if (local_48[0] != '\0') {
        pcVar4 = local_48;
      }
      local_38[0] = local_48[0];
      *pcVar4 = '\0';
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_40 = (double)FUN_0125a280();
      if ((local_38[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (1 < *(int *)(local_50 + 0xc)) {
        lVar5 = 1;
        do {
          pvVar2 = _pthread_getspecific(pVar3);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar6 = (double)FUN_0125a280();
          if (dVar6 < local_40) {
            pvVar2 = _pthread_getspecific(pVar3);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_40 = (double)FUN_0125a280();
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)(local_50 + 0xc));
      }
      auVar7._0_8_ = (**(code **)(*unaff_RDI + 0x938))(local_40);
      auVar7._8_8_ = extraout_XMM0_Qb;
      auVar7 = roundss(auVar7,auVar7,9);
      dVar6 = (double)(**(code **)(*unaff_RDI + 0x930))(auVar7._0_8_);
      if (((longlong *)unaff_RDI[0x69] != (longlong *)0x0) &&
         (local_40 = dVar6, cVar1 = (**(code **)(*(longlong *)unaff_RDI[0x69] + 0x50))(),
         cVar1 == '\0')) {
        (**(code **)(*(longlong *)unaff_RDI[0x69] + 0x60))();
      }
    }
    FUN_00d50b20();
  }
  return;
}


