// Function: FUN_016bc130
// Address: 016bc130
// Size: 1795 bytes
// Class: MUAraContentReader
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "audioModification->getDocumentController() == documentController"
//   "isContentAvailable"


/* WARNING: Removing unreachable block (ram,0x016bc6cd) */
/* WARNING: Removing unreachable block (ram,0x016bc6d9) */

longlong FUN_016bc130(undefined8 *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  puVar7 = param_1;
  uVar10 = FUN_00da7190();
  pVar6 = (pthread_key_t)puVar7;
  if ((unaff_RDI == 0) || (cVar3 = FUN_0168a120(), uVar10 = extraout_XMM0_Qa, cVar3 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)(uVar10,"provided object ref is invalid");
    }
  }
  else {
    cVar3 = FUN_0168a0d0();
    if (cVar3 == '\0') {
      if (DAT_02802f60 != (undefined8 *)0x0) {
        lVar8 = 0;
        if ((code *)*DAT_02802f60 != (code *)0x0) {
          (*(code *)*DAT_02802f60)(extraout_XMM0_Qa_00,"call required from document main thread");
          lVar8 = 0;
        }
        goto LAB_016bc1f6;
      }
    }
    else {
      uVar10 = extraout_XMM0_Qa_00;
      if ((unaff_RSI == 0) || (cVar3 = FUN_01653650(), uVar10 = extraout_XMM0_Qa_01, cVar3 == '\0'))
      {
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)(uVar10,"provided object ref is invalid");
        }
      }
      else {
        pvVar5 = _pthread_getspecific(pVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar10 = FUN_0164e2c0();
        lVar8 = local_48;
        if ((local_40 != '\0') && (local_48 != 0)) {
          uVar10 = FUN_00d50b20();
        }
        if (lVar8 == unaff_RDI) {
          uVar4 = FUN_0167b260();
          cVar3 = FUN_016bb8f0(extraout_XMM0_Qa_02,uVar4);
          if (cVar3 != '\0') {
            if (param_2 == 0x15) {
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01650620();
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0166d810();
              local_60 = local_48;
              lVar8 = local_48;
              if (local_48 == 0) {
                bVar2 = false;
              }
              else if (local_40 == '\0') {
                FUN_00d50b00();
                bVar2 = true;
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_40 = '\0';
                bVar2 = true;
              }
              pVar6 = (pthread_key_t)lVar8;
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01651ad0();
            }
            else if (param_2 == 0x14) {
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01650620();
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0166d7d0();
              local_60 = local_48;
              lVar8 = local_48;
              if (local_48 == 0) {
                bVar2 = false;
              }
              else if (local_40 == '\0') {
                FUN_00d50b00();
                bVar2 = true;
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_40 = '\0';
                bVar2 = true;
              }
              pVar6 = (pthread_key_t)lVar8;
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01651ad0();
            }
            else {
              bVar2 = false;
              local_60 = 0;
            }
            lVar9 = local_60;
            if (param_1 == (undefined8 *)0x0) {
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01650330();
              local_70 = local_58;
              local_68 = 0;
              if (local_50 == '\0') {
                if (local_58 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_50 = '\0';
              }
              local_68 = '\x01';
              local_a0 = lVar9;
              local_98 = '\0';
              FUN_0172d300(&local_a0,param_2);
              lVar8 = local_48;
              if (local_48 == 0) {
                bVar1 = false;
                lVar8 = 0;
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
              if ((local_98 != '\0') && (local_a0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_68 != '\0') && (local_70 != 0)) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01650330();
              local_80 = local_58;
              local_78 = 0;
              if (local_50 == '\0') {
                if (local_58 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_50 = '\0';
              }
              lVar9 = local_60;
              local_78 = '\x01';
              FUN_0172dae0(*param_1,param_1[1]);
              lVar8 = local_48;
              if (local_48 == 0) {
                bVar1 = false;
                lVar8 = 0;
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
              if ((local_78 != '\0') && (local_80 != 0)) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
            }
            if (lVar8 == 0) {
              lVar8 = 0;
            }
            else {
              local_88 = '\0';
              local_90 = lVar8;
              FUN_01689550();
              if ((local_88 != '\0') && (local_90 != 0)) {
                FUN_00d50b20();
              }
              if (bVar1) {
                FUN_00d50b20();
              }
            }
            if ((bVar2) && (lVar9 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_016bc1f6;
          }
          if (DAT_02802f60 != (undefined8 *)0x0) {
            lVar8 = 0;
            if ((code *)*DAT_02802f60 != (code *)0x0) {
              (*(code *)*DAT_02802f60)(extraout_XMM0_Qa_03,"isContentAvailable");
            }
            goto LAB_016bc1f6;
          }
        }
        else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)
                    (uVar10,"audioModification->getDocumentController() == documentController");
        }
      }
    }
  }
  lVar8 = 0;
LAB_016bc1f6:
  FUN_00da71b0();
  return lVar8;
}


