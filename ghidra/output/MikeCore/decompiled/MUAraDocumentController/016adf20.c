// Function: FUN_016adf20
// Address: 016adf20
// Size: 1340 bytes
// Class: MUAraDocumentController
// String references:
//   "MUAraDocumentController"
//   "hostInstance != NULL"
//   "hostInstance->structSize >= ARA::kARADocumentControllerHostInstanceMinSize"
//   "hostInstance->audioAccessControllerInterface != NULL"
//   "hostInstance->audioAccessControllerInterface->structSize >= ARA::kARAAudioAccessControllerInterface...
//   "hostInstance->archivingControllerInterface != NULL"
//   "hostInstance->archivingControllerInterface->structSize >= ARA_IMPLEMENTED_STRUCT_SIZE(ARAArchivingC...
//   "hostInstance->archivingControllerInterface->structSize >= ARA::kARAArchivingControllerInterfaceMinS...
//   "hostInstance->contentAccessControllerInterface->structSize >= ARA::kARAContentAccessControllerInter...
//   "hostInstance->modelUpdateControllerInterface->structSize >= ARA::kARAModelUpdateControllerInterface...


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_016adf20(void)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong *unaff_RDI;
  undefined4 uVar7;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  uVar7 = FUN_00da7190();
  if (unaff_RDI == (ulonglong *)0x0) {
    if (DAT_02802f60 != (undefined8 *)0x0) {
      uVar6 = 0;
      if ((code *)*DAT_02802f60 != (code *)0x0) {
        (*(code *)*DAT_02802f60)(uVar7,"hostInstance != NULL");
        uVar6 = 0;
      }
      goto LAB_016ae19b;
    }
  }
  else if (*unaff_RDI < 0x58) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)
                (uVar7,"hostInstance->structSize >= ARA::kARADocumentControllerHostInstanceMinSize")
      ;
    }
  }
  else if ((ulonglong *)unaff_RDI[2] == (ulonglong *)0x0) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)(uVar7,"hostInstance->audioAccessControllerInterface != NULL");
    }
  }
  else if (*(ulonglong *)unaff_RDI[2] < 0x20) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)
                (uVar7,
                 "hostInstance->audioAccessControllerInterface->structSize >= ARA::kARAAudioAccessControllerInterfaceMinSize"
                );
    }
  }
  else if ((ulonglong *)unaff_RDI[4] == (ulonglong *)0x0) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)(uVar7,"hostInstance->archivingControllerInterface != NULL");
    }
  }
  else {
    iVar4 = 0;
    if (DAT_027cb0f0 != -1) {
      iVar4 = DAT_027cb0f0;
    }
    uVar1 = *(ulonglong *)unaff_RDI[4];
    if (iVar4 < 4) {
      if (0x2f < uVar1) goto LAB_016ae0c6;
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)
                  (uVar1,
                   "hostInstance->archivingControllerInterface->structSize >= ARA::kARAArchivingControllerInterfaceMinSize"
                  );
      }
    }
    else if (uVar1 < 0x38) {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)
                  (uVar1,
                   "hostInstance->archivingControllerInterface->structSize >= ARA_IMPLEMENTED_STRUCT_SIZE(ARAArchivingControllerInterface, getDocumentArchiveID)"
                  );
      }
    }
    else {
LAB_016ae0c6:
      if (((ulonglong *)unaff_RDI[6] == (ulonglong *)0x0) || (0x4f < *(ulonglong *)unaff_RDI[6])) {
        if (((ulonglong *)unaff_RDI[8] == (ulonglong *)0x0) || (0x1f < *(ulonglong *)unaff_RDI[8]))
        {
          if (iVar4 - 2U < 5) {
            if ((DAT_028ad840 == 0) || (DAT_028ad849 == '\0')) {
              FUN_00e8cb50();
              if (DAT_028ad840 == 0) {
                if ((DAT_027cb3b0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
                  _DAT_027cb300 = FUN_00d4fe50();
                  _DAT_027cb2e8 = "MUAraDocumentController";
                  _DAT_027cb2f0 = 0x80;
                  _DAT_027cb2f8 = FUN_016be860;
                  _DAT_027cb308 = 0;
                  uRam00000000027cb310 = 0;
                  _DAT_027cb318 = 0;
                  _DAT_027cb390 = 0;
                  uRam00000000027cb398 = 0;
                  _DAT_027cb3a0 = 0;
                  DAT_027cb3a2 = 1;
                  _DAT_027cb320 = 0;
                  uRam00000000027cb328 = 0;
                  _DAT_027cb330 = 0;
                  uRam00000000027cb338 = 0;
                  _DAT_027cb340 = 0;
                  uRam00000000027cb348 = 0;
                  _DAT_027cb350 = 0;
                  uRam00000000027cb358 = 0;
                  _DAT_027cb360 = 0;
                  uRam00000000027cb368 = 0;
                  _DAT_027cb370 = 0;
                  uRam00000000027cb378 = 0;
                  _DAT_027cb380 = 0;
                  uRam00000000027cb388 = 0;
                  DAT_027cb3ab = 0;
                  _DAT_027cb3a3 = 0;
                  ___cxa_guard_release();
                }
                lVar5 = FUN_00e86210();
                lVar2 = DAT_028ad840;
                if (DAT_028ad840 != lVar5) {
                  if (lVar5 != 0) {
                    FUN_00d50b00();
                  }
                  DAT_028ad840 = lVar5;
                  if (lVar2 != 0) {
                    FUN_00d50b20();
                  }
                }
                if ((lVar5 != 0) && (DAT_028ad848 == '\0')) {
                  DAT_028ad848 = '\x01';
                  FUN_00e8cb90();
                }
                DAT_028ad849 = '\x01';
                FUN_00e8cb70();
              }
              else {
                DAT_028ad849 = '\x01';
                FUN_00e8cb70();
              }
            }
            FUN_00c811e0();
            plVar3 = local_40;
            if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
                (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            uVar7 = (**(code **)(*plVar3 + 0x18))();
            FUN_0167a4d0(uVar7,&DAT_025f9ff0);
            FUN_0167b270();
            FUN_016b0100();
            FUN_0167b310();
            local_38 = '\0';
            local_40 = plVar3;
            FUN_00d21140();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d403d0();
            lVar2 = DAT_026fb7d8;
            if (DAT_026fb7d8 != 0) {
              FUN_00d50b00();
            }
            local_60 = plVar3;
            local_58 = '\0';
            local_50 = 0;
            local_48 = '\0';
            FUN_00d40470(&local_50,&local_60,1,3);
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            uVar6 = FUN_0167aaf0();
            FUN_00d50b20();
            goto LAB_016ae19b;
          }
        }
        else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)
                    (uVar1,
                     "hostInstance->modelUpdateControllerInterface->structSize >= ARA::kARAModelUpdateControllerInterfaceMinSize"
                    );
        }
      }
      else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)
                  (uVar1,
                   "hostInstance->contentAccessControllerInterface->structSize >= ARA::kARAContentAccessControllerInterfaceMinSize"
                  );
      }
    }
  }
  uVar6 = 0;
LAB_016ae19b:
  FUN_00da71b0();
  return uVar6;
}


