// Function: FUN_016af970
// Address: 016af970
// Size: 1313 bytes
// Class: MUAraDocumentController
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "!documentController->isHostEditingDocument()"
//   "documentController->getContentReaders()->getCount() == 0"
//   "audioSource->getDocumentController() == documentController"


/* WARNING: Removing unreachable block (ram,0x016afd8b) */
/* WARNING: Removing unreachable block (ram,0x016afd97) */
/* WARNING: Removing unreachable block (ram,0x016afd71) */
/* WARNING: Removing unreachable block (ram,0x016afd7d) */
/* WARNING: Removing unreachable block (ram,0x016afdbe) */
/* WARNING: Removing unreachable block (ram,0x016afdc7) */

undefined4 FUN_016af970(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  undefined8 *puVar6;
  char *pcVar7;
  longlong unaff_RDI;
  longlong local_b0;
  char local_a8;
  int local_60;
  undefined4 uStack_5c;
  char local_58;
  longlong local_50;
  char local_48 [16];
  char local_38 [8];
  
  puVar6 = param_1;
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    uVar2 = 0;
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      uVar2 = 0;
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        uVar2 = 0;
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 == '\0') {
        FUN_01689520();
        pVar5 = (pthread_key_t)puVar6;
        if (*(int *)(CONCAT44(uStack_5c,local_60) + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          pVar5 = (pthread_key_t)CONCAT71((int7)((ulonglong)puVar6 >> 8),local_48[0]);
          pcVar7 = local_38;
          if (local_48[0] != '\0') {
            pcVar7 = local_48;
          }
          local_38[0] = local_48[0];
          *pcVar7 = '\0';
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
          if ((local_38[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a8 != '\0') && (local_b0 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_58 != '\0') && (CONCAT44(uStack_5c,local_60) != 0)) {
          FUN_00d50b20();
        }
        if ((param_2 == 0) || (cVar1 = FUN_0166db10(), cVar1 == '\0')) {
          uVar2 = 0;
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
        else {
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01660830();
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (local_50 == unaff_RDI) {
            DAT_02802f48 = DAT_02802f48 + 1;
            pvVar3 = _pthread_getspecific(pVar5);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_016670b0();
            pvVar3 = _pthread_getspecific(pVar5);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0124df10();
            if (local_48[0] == '\0') {
              if (((local_50 != 0) && (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_48[0] = '\0';
            }
            if ((local_58 != '\0') && (CONCAT44(uStack_5c,local_60) != 0)) {
              FUN_00d50b20();
            }
            pvVar3 = _pthread_getspecific(pVar5);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01733b90();
            if (((local_48[0] == '\0') && (local_50 != 0)) &&
               ((FUN_00d50b00(), local_48[0] != '\0' && (local_50 != 0)))) {
              FUN_00d50b20();
            }
            FUN_012e16c0();
            if (local_48[0] == '\0') {
              if (((local_50 != 0) && (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_48[0] = '\0';
            }
            uVar2 = FUN_01684310();
            lVar4 = FUN_000030c0();
            *param_1 = *(undefined8 *)(lVar4 + (longlong)local_60 * 8);
            *param_3 = 0;
            DAT_02802f48 = DAT_02802f48 + -1;
            if (local_50 != 0) {
              FUN_00d50b20();
              FUN_00d50b20();
              FUN_00d50b20();
            }
          }
          else {
            uVar2 = 0;
            if ((DAT_02802f60 != (undefined8 *)0x0) &&
               (uVar2 = 0, (code *)*DAT_02802f60 != (code *)0x0)) {
              (*(code *)*DAT_02802f60)();
            }
          }
        }
      }
      else {
        uVar2 = 0;
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
          uVar2 = 0;
        }
      }
    }
  }
  FUN_00da71b0();
  return uVar2;
}


