// Function: FUN_0095517c
// Address: 0095517c
// Size: 1492 bytes
// Class: GNList
// String references:
//   "Player validation failed, because a path to the current executable could not be obtained."
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Pac...
//   "void pace::eden::doPlayerValidationAndKeyFixup(pace::eden::thrift::pub::ContentSymmetricKeys &)"
//   "There was an error (%s) validating the player's signature."
//   "Content is not meant for player signed by publisherId 0x%X"


/* WARNING: Type propagation algorithm not settling */

void FUN_0095517c(void)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  undefined8 *******pppppppuVar6;
  undefined8 uVar7;
  longlong *plVar8;
  char *pcVar9;
  void *pvVar10;
  undefined8 *******pppppppuVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar14;
  undefined8 local_9c0;
  undefined8 local_9b8;
  undefined8 local_9b0;
  undefined4 local_9a8;
  int *local_9a0;
  code *local_998;
  code *local_990;
  undefined8 *local_988;
  undefined8 local_980;
  longlong local_978;
  undefined8 *******local_970;
  undefined8 *******local_968;
  undefined8 local_960;
  byte local_950;
  ulonglong local_948;
  undefined8 *******local_938;
  longlong local_928;
  longlong lStack_920;
  undefined8 local_918;
  longlong local_908;
  undefined1 local_900;
  int local_8d8 [458];
  longlong local_1b0;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  local_9c0 = 0;
  local_9b8 = 0;
  local_9b0 = 0;
  local_9a8 = 0;
  FUN_0098eb02();
  local_988 = &local_980;
  local_978 = 0;
  local_980 = 0;
  local_970 = &local_968;
  local_960 = 0;
  local_968 = (undefined8 *******)0x0;
  local_918 = 0;
  local_928 = 0;
  lStack_920 = 0;
  local_938 = local_970;
  local_908 = FUN_0095476e();
  local_900 = 0;
  FUN_009b4e10();
  pppppppuVar6 = (undefined8 *******)FUN_009546b3();
  if (&local_970 != (undefined8 ********)pppppppuVar6) {
    FUN_009591f0(extraout_XMM0_Da,pppppppuVar6 + 1);
  }
  FUN_0094d0ec();
  plVar1 = (longlong *)(unaff_RDI + 200);
  plVar8 = *(longlong **)(unaff_RDI + 0xc0);
  while (plVar12 = plVar8, plVar12 != plVar1) {
    if (local_968 != (undefined8 *******)0x0) {
      iVar2 = *(int *)((longlong)plVar12 + 0x1c);
      pppppppuVar6 = local_968;
      pppppppuVar11 = local_938;
      do {
        if (iVar2 <= *(int *)((longlong)pppppppuVar6 + 0x1c)) {
          pppppppuVar11 = pppppppuVar6;
        }
        pppppppuVar6 = (undefined8 *******)
                       pppppppuVar6[*(int *)((longlong)pppppppuVar6 + 0x1c) < iVar2];
      } while (pppppppuVar6 != (undefined8 *******)0x0);
      if ((pppppppuVar11 != local_938) && (*(int *)((longlong)pppppppuVar11 + 0x1c) <= iVar2)) {
        FUN_008df200(0,(int *)((longlong)plVar12 + 0x1c));
      }
    }
    (**(code **)(local_1b0 + 0x28))();
    uVar14 = FUN_009740dc();
    FUN_0098ef68(uVar14,4);
    plVar3 = (longlong *)plVar12[1];
    if ((longlong *)plVar12[1] == (longlong *)0x0) {
      plVar8 = (longlong *)plVar12[2];
      if (*(longlong **)plVar12[2] != plVar12) {
        do {
          plVar12 = (longlong *)plVar12[2];
          plVar8 = (longlong *)plVar12[2];
        } while (*(longlong **)plVar12[2] != plVar12);
      }
    }
    else {
      do {
        plVar8 = plVar3;
        plVar3 = (longlong *)*plVar8;
      } while (plVar3 != (longlong *)0x0);
    }
  }
  if (local_978 != 0) goto LAB_009555b6;
  FUN_009ced88();
  if ((local_950 & 1) == 0) {
    local_948 = (ulonglong)(local_950 >> 1);
  }
  if (local_948 == 0) {
    FUN_00925fd0();
    uVar7 = FUN_00926010();
    uVar14 = FUN_00928ab0("void pace::eden::doPlayerValidationAndKeyFixup(pace::eden::thrift::pub::ContentSymmetricKeys &)"
                          ,0x277);
    FUN_009cb75b(uVar14,uVar7);
  }
  FUN_0097d480();
  cVar4 = FUN_00957a95(0,0,1,0);
  if (cVar4 == '\0') {
    FUN_00925fd0();
    uVar7 = FUN_00926010();
    local_9a0 = (int *)&local_9c0;
    local_998 = FUN_009b6370;
    local_990 = FUN_0094ef70;
    FUN_00983230();
    uVar14 = FUN_00928ab0("void pace::eden::doPlayerValidationAndKeyFixup(pace::eden::thrift::pub::ContentSymmetricKeys &)"
                          ,0x280);
    FUN_009cb75b(uVar14,uVar7);
  }
  plVar8 = (longlong *)*plVar1;
  plVar12 = plVar1;
  if (plVar8 == (longlong *)0x0) {
LAB_009554f3:
    FUN_00925fd0();
    uVar7 = FUN_00926010();
    local_998 = FUN_009cac80;
    local_990 = FUN_009cefa0;
    local_9a0 = local_8d8;
    FUN_00983230();
    pcVar9 = 
    "void pace::eden::doPlayerValidationAndKeyFixup(pace::eden::thrift::pub::ContentSymmetricKeys &)"
    ;
    uVar14 = FUN_00928ab0("void pace::eden::doPlayerValidationAndKeyFixup(pace::eden::thrift::pub::ContentSymmetricKeys &)"
                          ,0x288);
    FUN_009cb75b(uVar14,uVar7);
  }
  else {
    do {
      if (local_8d8[0] <= *(int *)((longlong)plVar8 + 0x1c)) {
        plVar12 = plVar8;
      }
      plVar8 = (longlong *)plVar8[*(int *)((longlong)plVar8 + 0x1c) < local_8d8[0]];
    } while (plVar8 != (longlong *)0x0);
    if ((plVar12 == plVar1) ||
       (pcVar9 = (char *)0x0, local_8d8[0] < *(int *)((longlong)plVar12 + 0x1c))) goto LAB_009554f3;
  }
  local_9a0 = (int *)FUN_0095476e();
  local_998 = (code *)((ulonglong)local_998 & 0xffffffffffffff00);
  FUN_009b4e10();
  uVar14 = FUN_009546b3();
  FUN_008df200(uVar14,local_8d8);
  FUN_0094d0ec();
  FUN_008e20ae();
  if ((local_950 & 1) != 0) {
    operator_delete(pcVar9);
  }
LAB_009555b6:
  (**(code **)(local_1b0 + 0x28))();
  uVar5 = FUN_0098f810();
  uVar13 = (ulonglong)uVar5;
  if ((ulonglong)(lStack_920 - local_928) < uVar13) {
    FUN_00958ec0();
  }
  else if (uVar13 < (ulonglong)(lStack_920 - local_928)) {
    lStack_920 = uVar13 + local_928;
  }
  (**(code **)(local_1b0 + 0x48))(0,local_928);
  if ((ulonglong)(lStack_920 - local_928) < 0x10) {
    FUN_00958ec0();
  }
  else if (lStack_920 - local_928 != 0x10) {
    lStack_920 = local_928 + 0x10;
  }
  pvVar10 = (void *)0x0;
  FUN_0098ce6c(0,2,&local_928);
  if (*(char *)(unaff_RDI + 0xd8) != '\0') {
    (**(code **)(local_908 + 0x30))();
  }
  if (*(char *)(unaff_RDI + 0xd9) != '\0') {
    (**(code **)(local_908 + 0x30))();
  }
  *(undefined8 *)(unaff_RDI + 0xb0) = *(undefined8 *)(unaff_RDI + 0xa8);
  FUN_0098ce7c();
  if (local_928 != 0) {
    lStack_920 = local_928;
    operator_delete(pvVar10);
  }
  FUN_008defa0();
  FUN_008defa0();
  FUN_0098edfa();
  FUN_008fa4ea();
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


