// Function: FUN_016af570
// Address: 016af570
// Size: 558 bytes
// Class: MUAraDocumentController
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "!documentController->isHostEditingDocument()"
//   "documentController->getContentReaders()->getCount() == 0"


/* WARNING: Removing unreachable block (ram,0x016af774) */
/* WARNING: Removing unreachable block (ram,0x016af77d) */

undefined4 FUN_016af570(void)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  longlong unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_40;
  char local_38 [8];
  char local_30 [8];
  
  if ((unaff_RDI != 0) && (cVar2 = FUN_0168a120(), cVar2 != '\0')) {
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      if (DAT_02802f60 == (undefined8 *)0x0) {
        return 0;
      }
      pcVar1 = (code *)*DAT_02802f60;
    }
    else {
      cVar2 = FUN_0167b260();
      if (cVar2 == '\0') {
        FUN_01689520();
        if (*(int *)(local_70 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          pcVar4 = local_30;
          if (local_38[0] != '\0') {
            pcVar4 = local_38;
          }
          local_30[0] = local_38[0];
          *pcVar4 = '\0';
          if ((local_38[0] != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
          if ((local_30[0] != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        DAT_02802f48 = DAT_02802f48 + 1;
        FUN_01682950();
        if ((((local_38[0] == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38[0] != '\0')) &&
           (local_40 != 0)) {
          FUN_00d50b20();
        }
        DAT_02802f48 = DAT_02802f48 + -1;
        uVar3 = FUN_01684310();
        if (local_40 == 0) {
          return uVar3;
        }
        FUN_00d50b20();
        return uVar3;
      }
      if (DAT_02802f60 == (undefined8 *)0x0) {
        return 0;
      }
      pcVar1 = (code *)*DAT_02802f60;
    }
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
    return 0;
  }
  if (DAT_02802f60 == (undefined8 *)0x0) {
    return 0;
  }
  if ((code *)*DAT_02802f60 == (code *)0x0) {
    return 0;
  }
  (*(code *)*DAT_02802f60)();
  return 0;
}


