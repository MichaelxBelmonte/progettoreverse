// Function: FUN_01f316e0
// Address: 01f316e0
// Size: 1142 bytes
// Class: GNOverloudTapedesk


/* WARNING: Removing unreachable block (ram,0x01f319e6) */
/* WARNING: Removing unreachable block (ram,0x01f319ef) */
/* WARNING: Removing unreachable block (ram,0x01f318bd) */
/* WARNING: Removing unreachable block (ram,0x01f318c6) */
/* WARNING: Removing unreachable block (ram,0x01f31871) */
/* WARNING: Removing unreachable block (ram,0x01f3187d) */
/* WARNING: Removing unreachable block (ram,0x01f3194f) */
/* WARNING: Removing unreachable block (ram,0x01f31958) */
/* WARNING: Removing unreachable block (ram,0x01f31a81) */
/* WARNING: Removing unreachable block (ram,0x01f31a8a) */

undefined4 FUN_01f316e0(longlong *param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_48;
  char local_40;
  longlong *local_38;
  
  if (*unaff_RSI == 0) {
    (**(code **)(*unaff_RDI + 0x458))();
    lVar5 = *unaff_RSI;
    if (lVar5 == local_48) {
      if (((char)unaff_RSI[1] != '\0') || (local_48 == 0)) goto LAB_01f317bc;
      if (local_40 == '\0') {
        FUN_00d50b00();
        goto LAB_01f317b5;
      }
    }
    else {
      lVar1 = unaff_RSI[1];
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        *unaff_RSI = local_48;
        if (((char)lVar1 != '\0') && (lVar5 != 0)) {
          FUN_00d50b20();
        }
LAB_01f317b5:
        local_38 = unaff_RSI + 1;
        *(undefined1 *)local_38 = 1;
LAB_01f317bc:
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01f317d0;
      }
      *unaff_RSI = local_48;
      if (((char)lVar1 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
    }
    local_38 = unaff_RSI + 1;
    *(undefined1 *)local_38 = 1;
  }
LAB_01f317d0:
  *(int *)((longlong)unaff_RDI + 0xdc) = *(int *)((longlong)unaff_RDI + 0xdc) + 1;
  *(int *)(unaff_RDI + 0x1c) = (int)unaff_RDI[0x1c] + 1;
  _objc_alloc();
  puVar2 = PTR__objc_msgSend_024a9998;
  (*(code *)PTR__objc_msgSend_024a9998)();
  _objc_alloc();
  (*(code *)puVar2)();
  _objc_autorelease();
  (*(code *)puVar2)();
  FUN_00e1cfc0();
  (*(code *)PTR__objc_msgSend_024a9998)();
  FUN_00e1cfc0();
  (*(code *)PTR__objc_msgSend_024a9998)();
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  if ((*param_1 != 0) && (iVar3 = FUN_00d8c7a0(), iVar3 != 0)) {
    FUN_00e1cfc0();
    (*(code *)PTR__objc_msgSend_024a9998)();
    (*(code *)PTR__objc_msgSend_024a9998)();
    iVar3 = *(int *)(puVar4 + 3);
    FUN_00c8e340();
    *(undefined4 *)(puVar4[2] + (longlong)iVar3) = 0;
  }
  if ((*param_3 != 0) && (iVar3 = FUN_00d8c7a0(), iVar3 != 0)) {
    FUN_00e1cfc0();
    (*(code *)PTR__objc_msgSend_024a9998)();
    (*(code *)PTR__objc_msgSend_024a9998)();
    iVar3 = *(int *)(puVar4 + 3);
    FUN_00c8e340();
    *(undefined4 *)(puVar4[2] + (longlong)iVar3) = 1;
  }
  if ((*param_4 != 0) && (iVar3 = FUN_00d8c7a0(), iVar3 != 0)) {
    FUN_00e1cfc0();
    (*(code *)PTR__objc_msgSend_024a9998)();
    (*(code *)PTR__objc_msgSend_024a9998)();
    (*(code *)PTR__objc_msgSend_024a9998)();
    iVar3 = *(int *)(puVar4 + 3);
    FUN_00c8e340();
    *(undefined4 *)(puVar4[2] + (longlong)iVar3) = 2;
  }
  lVar5 = (*(code *)PTR__objc_msgSend_024a9998)();
  if (lVar5 == 0x3ea) {
    puVar6 = (undefined4 *)(puVar4[2] + 8);
  }
  else if (lVar5 == 0x3e9) {
    puVar6 = (undefined4 *)(puVar4[2] + 4);
  }
  else {
    uVar7 = 0;
    if (lVar5 != 1000) goto LAB_01f31b1e;
    puVar6 = (undefined4 *)puVar4[2];
  }
  uVar7 = *puVar6;
LAB_01f31b1e:
  (*(code *)PTR__objc_release_024a99a0)();
  *(int *)((longlong)unaff_RDI + 0xdc) = *(int *)((longlong)unaff_RDI + 0xdc) + -1;
  *(int *)(unaff_RDI + 0x1c) = (int)unaff_RDI[0x1c] + -1;
  FUN_00d50b20();
  return uVar7;
}


