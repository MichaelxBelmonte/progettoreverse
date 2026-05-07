// Function: FUN_0195bf50
// Address: 0195bf50
// Size: 812 bytes
// Class: MUDetectionEditorView


ulonglong FUN_0195bf50(float param_1,float param_2)

{
  char cVar1;
  byte bVar2;
  void *pvVar3;
  pthread_key_t in_ECX;
  longlong *unaff_RDI;
  undefined8 unaff_R12;
  ulonglong uVar4;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_40;
  char local_38;
  undefined7 uVar5;
  
  fVar11 = param_2;
  fVar6 = (float)(**(code **)(*unaff_RDI + 0x4d8))();
  cVar1 = FUN_00d054a0();
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
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          bVar2 = bVar2 ^ 1;
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
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
        uVar7 = FUN_012f7cb0();
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
        uVar8 = FUN_012f9490();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01989f80();
        fVar9 = (float)(**(code **)(*local_40 + 0x938))(uVar7);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01989f80();
        fVar10 = (float)(**(code **)(*local_40 + 0x938))(uVar8);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        fVar12 = fVar6;
        if (fVar6 <= fVar9) {
          fVar12 = fVar9;
        }
        if (fVar11 + fVar6 <= fVar10) {
          fVar10 = fVar11 + fVar6;
        }
        uVar4 = CONCAT71(uVar5,param_1 < fVar10 && fVar12 < param_2 + param_1);
      }
    }
  }
  return uVar4 & 0xffffffff;
}


