// Function: FUN_01693b00
// Address: 01693b00
// Size: 900 bytes
// Class: MUAraPlugInWrapperDelegate
// String references:
//   "_isEditorView"


undefined8 FUN_01693b00(undefined4 param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  pthread_key_t pVar6;
  char *pcVar7;
  longlong unaff_RDI;
  longlong lVar8;
  longlong lVar9;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_78;
  char local_70 [8];
  longlong local_68;
  char local_60;
  undefined8 local_58;
  longlong local_50;
  char local_48;
  char local_38 [8];
  
  if ((*(char *)(unaff_RDI + 0xa7) == '\0') &&
     (FUN_016aea20(param_1,"_isEditorView"), *(char *)(unaff_RDI + 0xa7) == '\0')) {
    uVar3 = 0;
  }
  else {
    *(byte *)(unaff_RDI + 0xa0) = *(byte *)(unaff_RDI + 0xa0) | 4;
    uVar3 = FUN_00bd58a0();
    if ((*(longlong *)(unaff_RDI + 0x98) != 0) && (cVar2 = FUN_016ae5f0(), cVar2 != '\0')) {
      FUN_00da7190();
      if (*(int *)(*(longlong *)(unaff_RDI + 0xa8) + 0xc) != 0) {
        FUN_00b68bb0();
        if (local_78 == 0) {
          cVar2 = '\x01';
        }
        else {
          FUN_00b68bb0();
          cVar2 = FUN_00d45ad0();
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_70[0] != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') {
          local_58 = 0;
          lVar8 = 0;
        }
        else {
          FUN_00d23310();
          pVar6 = CONCAT31((int3)((uint)param_1 >> 8),local_70[0]);
          pcVar7 = local_38;
          if (local_70[0] != '\0') {
            pcVar7 = local_70;
          }
          local_38[0] = local_70[0];
          *pcVar7 = '\0';
          if ((local_70[0] != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01653bd0();
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012c8f20();
          local_60 = 0;
          if (local_90 == '\0') {
            if (local_98 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_90 = '\0';
          }
          local_60 = '\x01';
          local_68 = local_98;
          uVar5 = FUN_000ba510();
          lVar8 = local_50;
          if (local_50 == 0) {
            local_58 = 0;
          }
          else if (local_48 == '\0') {
            uVar5 = FUN_00d50b00();
            local_58 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_48 = '\0';
            local_58 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
        }
        lVar1 = *(longlong *)(unaff_RDI + 0xa8);
        if (lVar1 == 0) {
          lVar9 = 0;
        }
        else {
          FUN_00d50b00();
          lVar9 = *(longlong *)(unaff_RDI + 0xa8);
        }
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        FUN_01653c10();
        FUN_016914e0();
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (((char)local_58 != '\0') && (lVar8 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00da71b0();
    }
  }
  return uVar3;
}


