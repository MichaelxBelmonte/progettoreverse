// Function: FUN_01f4eb70
// Address: 01f4eb70
// Size: 2137 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01f4f376) */
/* WARNING: Removing unreachable block (ram,0x01f4f383) */
/* WARNING: Removing unreachable block (ram,0x01f4f333) */
/* WARNING: Removing unreachable block (ram,0x01f4f33c) */

bool FUN_01f4eb70(void)

{
  undefined *puVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  code *pcVar6;
  longlong unaff_RDI;
  ulonglong uVar7;
  longlong *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  _objc_alloc();
  puVar1 = PTR__objc_msgSend_024a9998;
  (*(code *)PTR__objc_msgSend_024a9998)();
  FUN_00d216c0();
  (*(code *)puVar1)();
  (*(code *)puVar1)();
  (*(code *)puVar1)();
  (*(code *)puVar1)();
  (*(code *)puVar1)();
  lVar3 = *(longlong *)(unaff_RDI + 0x30);
  if (lVar3 != 0) {
    FUN_00d50b00();
    FUN_00e1cfc0();
    (*(code *)PTR__objc_msgSend_024a9998)();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01f4fff0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_01f4fff0();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00e1cfc0();
    (*(code *)PTR__objc_msgSend_024a9998)();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  pcVar6 = (code *)PTR__objc_msgSend_024a9998;
  if (*(longlong *)(unaff_RDI + 0x10) != 0) {
    _objc_alloc();
    lVar3 = *(longlong *)(unaff_RDI + 0x10);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    (*(code *)PTR__objc_msgSend_024a9998)();
    (*(code *)PTR__objc_msgSend_024a9998)();
    pcVar6 = (code *)PTR__objc_msgSend_024a9998;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  if (*(longlong **)(unaff_RDI + 0x28) == (longlong *)0x0) {
LAB_01f4f0b8:
    (*(code *)PTR__objc_msgSend_024a9998)();
  }
  else {
    cVar2 = (**(code **)(**(longlong **)(unaff_RDI + 0x28) + 0x398))();
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(**(longlong **)(unaff_RDI + 0x28) + 0x3a0))();
      if (cVar2 == '\0') {
        (**(code **)(**(longlong **)(unaff_RDI + 0x28) + 0x3f0))();
        if (local_40 == 0) {
          cVar2 = '\0';
        }
        else {
          (**(code **)(**(longlong **)(unaff_RDI + 0x28) + 0x3f0))();
          cVar2 = (**(code **)(*local_50 + 0x3a0))();
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        pcVar6 = (code *)PTR__objc_msgSend_024a9998;
        if (cVar2 == '\0') goto LAB_01f4f0b8;
        (**(code **)(**(longlong **)(unaff_RDI + 0x28) + 0x3f0))();
        (**(code **)(*local_50 + 0x368))();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        lVar3 = FUN_00e1cfc0();
        pcVar6 = (code *)PTR__objc_msgSend_024a9998;
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        (**(code **)(**(longlong **)(unaff_RDI + 0x28) + 0x368))();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        lVar3 = FUN_00e1cfc0();
        pcVar6 = (code *)PTR__objc_msgSend_024a9998;
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      (**(code **)(**(longlong **)(unaff_RDI + 0x28) + 0x368))();
      FUN_00d8a060();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00e1cfc0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(**(longlong **)(unaff_RDI + 0x28) + 0x3f0))();
      (**(code **)(*local_50 + 0x368))();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      lVar3 = FUN_00e1cfc0();
      pcVar6 = (code *)PTR__objc_msgSend_024a9998;
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    (*(code *)PTR__objc_msgSend_024a9998)();
    if (lVar3 != 0) {
      (*(code *)PTR__objc_msgSend_024a9998)(1,lVar3);
    }
  }
  (*pcVar6)();
  (*pcVar6)();
  _objc_alloc();
  (*pcVar6)();
  _objc_autorelease();
  FUN_00d50b00();
  (*(code *)PTR__objc_msgSend_024a9998)();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  (*(code *)PTR__objc_msgSend_024a9998)();
  FUN_01f27fe0();
  *(int *)(local_40 + 0xdc) = *(int *)(local_40 + 0xdc) + 1;
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  lVar3 = (*(code *)PTR__objc_msgSend_024a9998)();
  FUN_01f27fe0();
  *(int *)(local_40 + 0xdc) = *(int *)(local_40 + 0xdc) + -1;
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  pcVar6 = (code *)PTR__objc_msgSend_024a9998;
  if (lVar3 == 1) {
    (*(code *)PTR__objc_msgSend_024a9998)();
    lVar4 = (*pcVar6)();
    if (lVar4 != 0) {
      uVar7 = 0;
      do {
        (*pcVar6)();
        FUN_00e1d1d0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
            goto LAB_01f4f350;
          }
        }
        else if (local_40 != 0) {
LAB_01f4f350:
          local_38 = '\0';
          FUN_00d21140();
          FUN_00d50b20();
        }
        pcVar6 = (code *)PTR__objc_msgSend_024a9998;
        uVar7 = uVar7 + 1;
        uVar5 = (*(code *)PTR__objc_msgSend_024a9998)();
      } while (uVar7 < uVar5);
    }
  }
  (*(code *)PTR__objc_msgSend_024a9998)();
  (*(code *)PTR__objc_release_024a99a0)();
  return lVar3 != 1;
}


