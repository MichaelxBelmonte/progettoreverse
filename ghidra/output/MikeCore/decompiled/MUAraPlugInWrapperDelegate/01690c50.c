// Function: FUN_01690c50
// Address: 01690c50
// Size: 1459 bytes
// Class: MUAraPlugInWrapperDelegate
// String references:
//   "playbackRegion->getDocumentController() == plugInWrapper->_documentController"
//   "regionSequence->getDocumentController() == plugInWrapper->_documentController"
//   "selection != NULL"
//   "selection->structSize >= ARA::kARAViewSelectionMinSize"
//   "selection->playbackRegionRefs != NULL"
//   "selection->regionSequenceRefs != NULL"
//   "provided object ref is invalid"
//   "call required from document main thread"


/* WARNING: Removing unreachable block (ram,0x01690e8a) */
/* WARNING: Removing unreachable block (ram,0x01690e93) */
/* WARNING: Removing unreachable block (ram,0x016910c7) */
/* WARNING: Removing unreachable block (ram,0x016910d0) */
/* WARNING: Removing unreachable block (ram,0x01690d07) */
/* WARNING: Removing unreachable block (ram,0x01690d14) */
/* WARNING: Removing unreachable block (ram,0x01690f10) */
/* WARNING: Removing unreachable block (ram,0x01690f19) */

void FUN_01690c50(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  void *pvVar8;
  pthread_key_t pVar9;
  ulonglong uVar10;
  ulonglong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 extraout_XMM0_Qa;
  longlong local_a0;
  undefined1 local_98;
  longlong local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  longlong local_60;
  longlong local_48;
  char local_40;
  
  uVar13 = FUN_00da7190();
  if ((unaff_RDI == 0) || (*(longlong *)(unaff_RDI + 0x28) == 0)) {
    FUN_016aea20(uVar13,"provided object ref is invalid");
    goto LAB_016911bb;
  }
  FUN_00d50b00();
  cVar7 = FUN_0168a0d0();
  if (cVar7 == '\0') {
    FUN_016aea20(extraout_XMM0_Qa,"call required from document main thread");
  }
  else if (unaff_RSI == (ulonglong *)0x0) {
    FUN_016aea20(extraout_XMM0_Qa,"selection != NULL");
  }
  else if (*unaff_RSI < 0x30) {
    FUN_016aea20(extraout_XMM0_Qa,"selection->structSize >= ARA::kARAViewSelectionMinSize");
  }
  else {
    if (unaff_RSI[1] == 0) {
      bVar5 = false;
      lVar11 = 0;
      uVar13 = extraout_XMM0_Qa;
    }
    else {
      if (unaff_RSI[2] == 0) {
        FUN_016aea20(extraout_XMM0_Qa,"selection->playbackRegionRefs != NULL");
        goto LAB_016911b3;
      }
      uVar13 = FUN_01691440();
      if (local_48 == 0) {
        lVar11 = 0;
        bVar5 = false;
      }
      else {
        bVar5 = true;
        lVar11 = local_48;
        if (local_40 == '\0') {
          uVar13 = FUN_00d50b00();
        }
      }
      if (unaff_RSI[1] != 0) {
        uVar12 = 0;
        do {
          lVar6 = local_48;
          uVar10 = unaff_RSI[2];
          if (*(longlong *)(uVar10 + uVar12 * 8) == 0) {
LAB_01690f49:
            FUN_016aea20(uVar10,"provided object ref is invalid");
            goto LAB_016911a1;
          }
          cVar7 = FUN_01658870();
          uVar10 = unaff_RSI[2];
          if (cVar7 == '\0') goto LAB_01690f49;
          lVar1 = *(longlong *)(uVar10 + uVar12 * 8);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          pvVar8 = _pthread_getspecific((pthread_key_t)uVar10);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar13 = FUN_01654a00();
          lVar2 = *(longlong *)(unaff_RDI + 0x98);
          if ((local_40 != '\0') && (local_48 != 0)) {
            uVar13 = FUN_00d50b20();
          }
          if (local_48 == lVar2) {
            local_40 = '\0';
            uVar13 = FUN_00d21140();
            local_48 = lVar1;
          }
          else {
            uVar13 = FUN_016aea20(uVar13,
                                  "playbackRegion->getDocumentController() == plugInWrapper->_documentController"
                                 );
          }
          if (lVar1 != 0) {
            uVar13 = FUN_00d50b20();
          }
          if (lVar6 != lVar2) goto LAB_016911a1;
          uVar12 = uVar12 + 1;
        } while (uVar12 < unaff_RSI[1]);
      }
    }
    if (unaff_RSI[3] == 0) {
      local_60 = 0;
      bVar4 = false;
LAB_0169112b:
      puVar3 = (undefined8 *)unaff_RSI[5];
      if (puVar3 == (undefined8 *)0x0) {
        uVar13 = FUN_00e7b500(DAT_023908c8,0);
      }
      else {
        uVar13 = FUN_00e7b500(*puVar3,puVar3[1]);
      }
      local_a0 = local_60;
      local_98 = 0;
      FUN_016914e0(uVar13,&local_a0);
LAB_0169118e:
      if ((bVar4) && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (unaff_RSI[4] != 0) {
        FUN_00323290();
        local_60 = local_48;
        if (local_48 == 0) {
          bVar4 = false;
          local_60 = 0;
        }
        else {
          bVar4 = true;
          if (local_40 == '\0') {
            FUN_00d50b00();
          }
        }
        if (unaff_RSI[3] != 0) {
          uVar12 = 0;
          do {
            lVar6 = local_48;
            uVar10 = unaff_RSI[4];
            if (*(longlong *)(uVar10 + uVar12 * 8) == 0) {
LAB_016911d6:
              FUN_016aea20(uVar10,"provided object ref is invalid");
              goto LAB_0169118e;
            }
            cVar7 = FUN_012c91b0();
            uVar10 = unaff_RSI[4];
            if (cVar7 == '\0') goto LAB_016911d6;
            lVar1 = *(longlong *)(uVar10 + uVar12 * 8);
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            pVar9 = (pthread_key_t)uVar10;
            pvVar8 = _pthread_getspecific(pVar9);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar13 = FUN_012c89b0();
            local_90 = *(longlong *)(unaff_RDI + 0x98);
            if ((local_40 != '\0') && (local_48 != 0)) {
              uVar13 = FUN_00d50b20();
            }
            if (local_48 == local_90) {
              pvVar8 = _pthread_getspecific(pVar9);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012c8f20();
              local_48 = local_88;
              if (local_80 == '\0') {
                if (local_88 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_80 = '\0';
              }
              local_78 = local_48;
              local_40 = '\0';
              FUN_00d21140();
              if (local_78 != 0) {
                FUN_00d50b20();
              }
              if ((local_80 != '\0') && (local_88 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              FUN_016aea20(uVar13,
                           "regionSequence->getDocumentController() == plugInWrapper->_documentController"
                          );
            }
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            if (lVar6 != local_90) goto LAB_0169118e;
            uVar12 = uVar12 + 1;
          } while (uVar12 < unaff_RSI[3]);
        }
        goto LAB_0169112b;
      }
      FUN_016aea20(uVar13,"selection->regionSequenceRefs != NULL");
    }
LAB_016911a1:
    if ((bVar5) && (lVar11 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_016911b3:
  FUN_00d50b20();
LAB_016911bb:
  FUN_00da71b0();
  return;
}


