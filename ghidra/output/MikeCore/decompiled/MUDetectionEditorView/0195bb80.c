// Function: FUN_0195bb80
// Address: 0195bb80
// Size: 705 bytes
// Class: MUDetectionEditorView


ulonglong FUN_0195bb80(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  void *pvVar3;
  pthread_key_t in_ECX;
  longlong *unaff_RDI;
  undefined8 unaff_R12;
  ulonglong uVar4;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  undefined7 uVar5;
  
  uVar6 = (**(code **)(*unaff_RDI + 0x4d8))();
  cVar1 = FUN_00d05410(param_1,uVar6,param_2);
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar5 = (undefined7)((ulonglong)unaff_R12 >> 8);
    uVar4 = CONCAT71(uVar5,1);
    if (unaff_RDI[0x2f] != 0) {
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      if (local_40 == (longlong *)0x0) {
        bVar2 = 0;
      }
      else {
        FUN_01989f80();
        cVar1 = FUN_019a9840();
        if (cVar1 == '\0') {
          bVar2 = 0;
        }
        else {
          FUN_01989f80();
          bVar2 = FUN_019b43a0();
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          bVar2 = bVar2 ^ 1;
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar2 != 0) {
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar7 = (double)FUN_012f7cb0();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar8 = (double)FUN_012f9490();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01989f80();
        dVar9 = (double)(**(code **)(*local_40 + 0x930))(param_1);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar4 = CONCAT71(uVar5,dVar9 <= dVar8 && dVar7 <= dVar9);
      }
    }
  }
  return uVar4 & 0xffffffff;
}


