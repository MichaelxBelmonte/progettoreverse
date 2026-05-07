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
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_0095517c(void)

{
  int64_t *plVar1;
  int iVar2;
  int64_t *plVar3;
  char cVar4;
  uint uVar5;
  void*******pppppppuVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  char *pcVar9;
  void *pvVar10;
  void*******pppppppuVar11;
  int64_t *plVar12;
  uint64_t uVar13;
  int64_t this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar14;
  uint64_t local_9c0;
  uint64_t local_9b8;
  uint64_t local_9b0;
  uint32_t local_9a8;
  int *local_9a0;
  code *local_998;
  code *local_990;
  void*local_988;
  uint64_t local_980;
  int64_t local_978;
  void*******local_970;
  void*******local_968;
  uint64_t local_960;
  byte local_950;
  uint64_t local_948;
  void*******local_938;
  int64_t local_928;
  int64_t lStack_920;
  uint64_t local_918;
  int64_t local_908;
  uint8_t local_900;
  int local_8d8 [458];
  int64_t local_1b0;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
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
  local_968 = (void*******)0x0;
  local_918 = 0;
  local_928 = 0;
  lStack_920 = 0;
  local_938 = local_970;
  local_908 = FUN_0095476e();
  local_900 = 0;
  FUN_009b4e10();
  pppppppuVar6 = (void*******)FUN_009546b3();
  if (&local_970 != (void********)pppppppuVar6) {
    FUN_009591f0(extraout_XMM0_Da,pppppppuVar6 + 1);
  }
  FUN_0094d0ec();
  plVar1 = (int64_t *)(this_ptr + 200);
  plVar8 = *(int64_t **)(this_ptr + 0xc0);
  while (plVar12 = plVar8, plVar12 != plVar1) {
    if (local_968 != (void*******)0x0) {
      iVar2 = *(int *)((int64_t)plVar12 + 0x1c);
      pppppppuVar6 = local_968;
      pppppppuVar11 = local_938;
      do {
        if (iVar2 <= *(int *)((int64_t)pppppppuVar6 + 0x1c)) {
          pppppppuVar11 = pppppppuVar6;
        }
        pppppppuVar6 = (void*******)
                       pppppppuVar6[*(int *)((int64_t)pppppppuVar6 + 0x1c) < iVar2];
      } while (pppppppuVar6 != (void*******)0x0);
      if ((pppppppuVar11 != local_938) && (*(int *)((int64_t)pppppppuVar11 + 0x1c) <= iVar2)) {
        FUN_008df200(0,(int *)((int64_t)plVar12 + 0x1c));
      }
    }
    (**(code **)(local_1b0 + 0x28))();
    uVar14 = FUN_009740dc();
    FUN_0098ef68(uVar14,4);
    plVar3 = (int64_t *)plVar12[1];
    if ((int64_t *)plVar12[1] == (int64_t *)0x0) {
      plVar8 = (int64_t *)plVar12[2];
      if (*(int64_t **)plVar12[2] != plVar12) {
        do {
          plVar12 = (int64_t *)plVar12[2];
          plVar8 = (int64_t *)plVar12[2];
        } while (*(int64_t **)plVar12[2] != plVar12);
      }
    }
    else {
      do {
        plVar8 = plVar3;
        plVar3 = (int64_t *)*plVar8;
      } while (plVar3 != (int64_t *)0x0);
    }
  }
  if (local_978 != 0) goto LAB_009555b6;
  FUN_009ced88();
  if ((local_950 & 1) == 0) {
    local_948 = (uint64_t)(local_950 >> 1);
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
  plVar8 = (int64_t *)*plVar1;
  plVar12 = plVar1;
  if (plVar8 == (int64_t *)0x0) {
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
      if (local_8d8[0] <= *(int *)((int64_t)plVar8 + 0x1c)) {
        plVar12 = plVar8;
      }
      plVar8 = (int64_t *)plVar8[*(int *)((int64_t)plVar8 + 0x1c) < local_8d8[0]];
    } while (plVar8 != (int64_t *)0x0);
    if ((plVar12 == plVar1) ||
       (pcVar9 = (char *)0x0, local_8d8[0] < *(int *)((int64_t)plVar12 + 0x1c))) goto LAB_009554f3;
  }
  local_9a0 = (int *)FUN_0095476e();
  local_998 = ((uint64_t)local_998 & 0xffffffffffffff00);
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
  uVar13 = (uint64_t)uVar5;
  if ((uint64_t)(lStack_920 - local_928) < uVar13) {
    FUN_00958ec0();
  }
  else if (uVar13 < (uint64_t)(lStack_920 - local_928)) {
    lStack_920 = uVar13 + local_928;
  }
  (**(code **)(local_1b0 + 0x48))(0,local_928);
  if ((uint64_t)(lStack_920 - local_928) < 0x10) {
    FUN_00958ec0();
  }
  else if (lStack_920 - local_928 != 0x10) {
    lStack_920 = local_928 + 0x10;
  }
  pvVar10 = (void *)0x0;
  FUN_0098ce6c(0,2,&local_928);
  if (*(char *)(this_ptr + 0xd8) != '\0') {
    (**(code **)(local_908 + 0x30))();
  }
  if (*(char *)(this_ptr + 0xd9) != '\0') {
    (**(code **)(local_908 + 0x30))();
  }
  *(void*)(this_ptr + 0xb0) = *(void*)(this_ptr + 0xa8);
  FUN_0098ce7c();
  if (local_928 != 0) {
    lStack_920 = local_928;
    operator_delete(pvVar10);
  }
  FUN_008defa0();
  FUN_008defa0();
  FUN_0098edfa();
  FUN_008fa4ea();
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return;
}

