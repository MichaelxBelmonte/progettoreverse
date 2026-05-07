// Function: FUN_016aeee0
// Address: 016aeee0
// Size: 560 bytes
// Class: MUAraDocumentController
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->getContentReaders()->getCount() == 0"
//   "documentController->isHostEditingDocument()"


/* WARNING: Removing unreachable block (ram,0x016af059) */
/* WARNING: Removing unreachable block (ram,0x016af062) */

undefined1 FUN_016aeee0(void)

{
  char cVar1;
  undefined1 uVar2;
  char *pcVar3;
  longlong unaff_RDI;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_48;
  char local_40 [16];
  char local_30 [8];
  
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if (DAT_02802f60 != (undefined8 *)0x0) {
        uVar2 = 0;
        if ((code *)*DAT_02802f60 != (code *)0x0) {
          (*(code *)*DAT_02802f60)();
        }
        goto LAB_016af0a5;
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 != '\0') {
        FUN_01689520();
        if (*(int *)(local_78 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          pcVar3 = local_30;
          if (local_40[0] != '\0') {
            pcVar3 = local_40;
          }
          local_30[0] = local_40[0];
          *pcVar3 = '\0';
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
          if ((local_30[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        FUN_016841e0();
        if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != 0)) {
          FUN_00d50b20();
        }
        uVar2 = FUN_0167bc80(0);
        FUN_0167b310();
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        goto LAB_016af0a5;
      }
      if (DAT_02802f60 != (undefined8 *)0x0) {
        uVar2 = 0;
        if ((code *)*DAT_02802f60 != (code *)0x0) {
          (*(code *)*DAT_02802f60)();
        }
        goto LAB_016af0a5;
      }
    }
  }
  uVar2 = 0;
LAB_016af0a5:
  FUN_00da71b0();
  return uVar2;
}


