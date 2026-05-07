// Function: FUN_0140f410
// Address: 0140f410
// Size: 1128 bytes
// Class: Unknown


void FUN_0140f410(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *local_48;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RSI + 0x18) == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  lVar4 = *param_1;
  if (lVar4 == 0) {
    FUN_0177f010();
    lVar4 = *param_1;
    if (lVar4 == local_40) {
      if (((char)param_1[1] == '\0') && (local_40 != 0)) {
        if (local_38 != '\0') goto LAB_0140f4b2;
        FUN_00d50b00();
        goto LAB_0140f4e7;
      }
LAB_0140f4ee:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar3 = param_1[1];
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        *param_1 = local_40;
        if (((char)lVar3 != '\0') && (lVar4 != 0)) {
          FUN_00d50b20();
        }
LAB_0140f4e7:
        local_48 = param_1 + 1;
        *(undefined1 *)local_48 = 1;
        goto LAB_0140f4ee;
      }
      *param_1 = local_40;
      if (((char)lVar3 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
LAB_0140f4b2:
      local_48 = param_1 + 1;
      *(undefined1 *)local_48 = 1;
    }
    lVar4 = *param_1;
  }
  lVar3 = *(longlong *)(unaff_RSI + 0x10);
  if (lVar3 != lVar4) {
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RSI + 0x10) = lVar4;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_017162e0();
  lVar4 = *(longlong *)(unaff_RSI + 0x30);
  lVar3 = lVar4;
  if (lVar4 != local_40) {
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar3 = 0;
        goto LAB_0140f54d;
      }
      FUN_00d50b00();
      lVar4 = *(longlong *)(unaff_RSI + 0x30);
      *(longlong *)(unaff_RSI + 0x30) = local_40;
    }
    else {
      local_38 = '\0';
LAB_0140f54d:
      *(longlong *)(unaff_RSI + 0x30) = lVar3;
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
      lVar3 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  FUN_017162e0();
  lVar4 = *(longlong *)(unaff_RSI + 0x38);
  lVar3 = lVar4;
  if (lVar4 != local_40) {
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar3 = 0;
        goto LAB_0140f5bf;
      }
      FUN_00d50b00();
      lVar4 = *(longlong *)(unaff_RSI + 0x38);
      *(longlong *)(unaff_RSI + 0x38) = local_40;
    }
    else {
      local_38 = '\0';
LAB_0140f5bf:
      *(longlong *)(unaff_RSI + 0x38) = lVar3;
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
      lVar3 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  FUN_017162e0();
  lVar4 = *(longlong *)(unaff_RSI + 0x40);
  lVar3 = lVar4;
  if (lVar4 != local_40) {
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar3 = 0;
        goto LAB_0140f631;
      }
      FUN_00d50b00();
      lVar4 = *(longlong *)(unaff_RSI + 0x40);
      *(longlong *)(unaff_RSI + 0x40) = local_40;
    }
    else {
      local_38 = '\0';
LAB_0140f631:
      *(longlong *)(unaff_RSI + 0x40) = lVar3;
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
      lVar3 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  FUN_017162e0();
  lVar4 = *(longlong *)(unaff_RSI + 0x48);
  lVar3 = lVar4;
  if (lVar4 != local_40) {
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar3 = 0;
        goto LAB_0140f6a3;
      }
      FUN_00d50b00();
      lVar4 = *(longlong *)(unaff_RSI + 0x48);
      *(longlong *)(unaff_RSI + 0x48) = local_40;
    }
    else {
      local_38 = '\0';
LAB_0140f6a3:
      *(longlong *)(unaff_RSI + 0x48) = lVar3;
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
      lVar3 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RSI + 0x50) != 0) {
    *(undefined8 *)(unaff_RSI + 0x50) = 0;
    FUN_00d50b20();
  }
  FUN_017162e0();
  lVar4 = *(longlong *)(unaff_RSI + 0x58);
  lVar3 = lVar4;
  if (lVar4 != local_40) {
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar3 = 0;
        goto LAB_0140f72b;
      }
      FUN_00d50b00();
      lVar4 = *(longlong *)(unaff_RSI + 0x58);
      *(longlong *)(unaff_RSI + 0x58) = local_40;
    }
    else {
      local_38 = '\0';
LAB_0140f72b:
      *(longlong *)(unaff_RSI + 0x58) = lVar3;
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
      lVar3 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  lVar4 = *(longlong *)(unaff_RSI + 0x18);
  lVar3 = *(longlong *)(unaff_RSI + 0x20);
  if (lVar3 != lVar4) {
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RSI + 0x20) = lVar4;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_0140f990();
  cVar2 = FUN_0140c2c0();
  if (cVar2 == '\0') {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  if (param_2 != (longlong *)0x0) {
    lVar4 = *(longlong *)(unaff_RSI + 0x20);
    lVar3 = *param_2;
    lVar1 = param_2[1];
    if (lVar3 == lVar4) {
      if (((char)lVar1 != '\0') || (lVar4 == 0)) goto LAB_0140f82c;
      FUN_00d50b00();
    }
    else {
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      *param_2 = lVar4;
      if (((char)lVar1 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
LAB_0140f82c:
  FUN_01715620();
  FUN_00d46530();
  return;
}


