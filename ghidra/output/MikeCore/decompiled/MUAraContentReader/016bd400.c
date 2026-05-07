// Function: FUN_016bd400
// Address: 016bd400
// Size: 1164 bytes
// Class: MUAraContentReader
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "playbackRegion->getDocumentController() == documentController"
//   "isContentAvailable"


/* WARNING: Removing unreachable block (ram,0x016bd740) */
/* WARNING: Removing unreachable block (ram,0x016bd74c) */

longlong FUN_016bd400(undefined8 *param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  undefined8 *puVar6;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  puVar6 = param_1;
  uVar8 = FUN_00da7190();
  pVar5 = (pthread_key_t)puVar6;
  if ((unaff_RDI == 0) || (cVar2 = FUN_0168a120(), uVar8 = extraout_XMM0_Qa, cVar2 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)(uVar8,"provided object ref is invalid");
    }
  }
  else {
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      if (DAT_02802f60 != (undefined8 *)0x0) {
        lVar7 = 0;
        if ((code *)*DAT_02802f60 != (code *)0x0) {
          (*(code *)*DAT_02802f60)(extraout_XMM0_Qa_00,"call required from document main thread");
          lVar7 = 0;
        }
        goto LAB_016bd4c7;
      }
    }
    else {
      uVar8 = extraout_XMM0_Qa_00;
      if ((unaff_RSI == 0) || (cVar2 = FUN_01658870(), uVar8 = extraout_XMM0_Qa_01, cVar2 == '\0'))
      {
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)(uVar8,"provided object ref is invalid");
        }
      }
      else {
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar8 = FUN_01654a00();
        lVar7 = local_48;
        if ((local_40 != '\0') && (local_48 != 0)) {
          uVar8 = FUN_00d50b20();
        }
        if (lVar7 == unaff_RDI) {
          uVar3 = FUN_0167b260();
          cVar2 = FUN_016bcb60(extraout_XMM0_Qa_02,uVar3);
          if (cVar2 == '\0') {
            if (DAT_02802f60 != (undefined8 *)0x0) {
              lVar7 = 0;
              if ((code *)*DAT_02802f60 != (code *)0x0) {
                (*(code *)*DAT_02802f60)(extraout_XMM0_Qa_03,"isContentAvailable");
              }
              goto LAB_016bd4c7;
            }
          }
          else {
            if (param_1 == (undefined8 *)0x0) {
              pvVar4 = _pthread_getspecific(pVar5);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0165a070();
              local_68 = local_58;
              local_60 = 0;
              if (local_50 == '\0') {
                if (local_58 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_50 = '\0';
              }
              local_60 = '\x01';
              local_90 = '\0';
              local_98 = 0;
              FUN_0172d300(&local_98,param_2);
              lVar7 = local_48;
              if (local_48 == 0) {
                lVar7 = 0;
                bVar1 = false;
              }
              else if (local_40 == '\0') {
                FUN_00d50b00();
                bVar1 = true;
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_40 = '\0';
                bVar1 = true;
              }
              if ((local_90 != '\0') && (local_98 != 0)) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != 0)) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              pvVar4 = _pthread_getspecific(pVar5);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0165a070();
              local_78 = local_58;
              local_70 = 0;
              if (local_50 == '\0') {
                if (local_58 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_50 = '\0';
              }
              local_70 = '\x01';
              FUN_0172dae0(*param_1,param_1[1]);
              lVar7 = local_48;
              if (local_48 == 0) {
                lVar7 = 0;
                bVar1 = false;
              }
              else if (local_40 == '\0') {
                FUN_00d50b00();
                bVar1 = true;
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_40 = '\0';
                bVar1 = true;
              }
              if ((local_70 != '\0') && (local_78 != 0)) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
            }
            if (lVar7 != 0) {
              local_80 = '\0';
              local_88 = lVar7;
              FUN_01689550();
              if ((local_80 != '\0') && (local_88 != 0)) {
                FUN_00d50b20();
              }
              if (bVar1) {
                FUN_00d50b20();
              }
              goto LAB_016bd4c7;
            }
          }
        }
        else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)
                    (uVar8,"playbackRegion->getDocumentController() == documentController");
        }
      }
    }
  }
  lVar7 = 0;
LAB_016bd4c7:
  FUN_00da71b0();
  return lVar7;
}


