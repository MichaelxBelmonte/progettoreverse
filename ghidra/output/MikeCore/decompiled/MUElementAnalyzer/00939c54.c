// Function: FUN_00939c54
// Address: 00939c54
// Size: 1134 bytes
// Class: MUElementAnalyzer


void FUN_00939c54(char param_1,longlong param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int unaff_ESI;
  ulonglong uVar10;
  longlong unaff_RDI;
  longlong lVar11;
  bool bVar12;
  char local_res8;
  
  plVar1 = (longlong *)(unaff_RDI + 8);
  lVar7 = *(longlong *)(unaff_RDI + 0x10);
  lVar2 = *(longlong *)(unaff_RDI + 8);
  FUN_008f8528();
  lVar11 = *(longlong *)(unaff_RDI + 8);
  if ((lVar7 != lVar2) && (*(int *)(lVar11 + 8) != unaff_ESI)) {
    if ((*(byte *)(lVar11 + 0x1e0) & 1) == 0) {
      *(undefined2 *)(lVar11 + 0x1e0) = 0;
    }
    else {
      **(undefined1 **)(lVar11 + 0x1f0) = 0;
      *(undefined8 *)(lVar11 + 0x1e8) = 0;
    }
    lVar7 = *plVar1;
    if ((*(byte *)(lVar7 + 0x1f8) & 1) == 0) {
      *(undefined2 *)(lVar7 + 0x1f8) = 0;
    }
    else {
      **(undefined1 **)(lVar7 + 0x208) = 0;
      *(undefined8 *)(lVar7 + 0x200) = 0;
    }
    lVar7 = *plVar1;
    if ((*(byte *)(lVar7 + 0x210) & 1) == 0) {
      *(undefined2 *)(lVar7 + 0x210) = 0;
    }
    else {
      **(undefined1 **)(lVar7 + 0x220) = 0;
      *(undefined8 *)(lVar7 + 0x218) = 0;
    }
    lVar7 = *plVar1;
    if ((*(byte *)(lVar7 + 0x228) & 1) == 0) {
      *(undefined2 *)(lVar7 + 0x228) = 0;
    }
    else {
      **(undefined1 **)(lVar7 + 0x238) = 0;
      *(undefined8 *)(lVar7 + 0x230) = 0;
    }
    lVar7 = *plVar1;
    if ((*(byte *)(lVar7 + 0x240) & 1) == 0) {
      *(undefined2 *)(lVar7 + 0x240) = 0;
    }
    else {
      **(undefined1 **)(lVar7 + 0x250) = 0;
      *(undefined8 *)(lVar7 + 0x248) = 0;
    }
    lVar7 = *plVar1;
    if ((*(byte *)(lVar7 + 600) & 1) == 0) {
      *(undefined2 *)(lVar7 + 600) = 0;
    }
    else {
      **(undefined1 **)(lVar7 + 0x268) = 0;
      *(undefined8 *)(lVar7 + 0x260) = 0;
    }
    lVar7 = *plVar1;
    if ((*(byte *)(lVar7 + 0x270) & 1) == 0) {
      *(undefined2 *)(lVar7 + 0x270) = 0;
    }
    else {
      **(undefined1 **)(lVar7 + 0x280) = 0;
      *(undefined8 *)(lVar7 + 0x278) = 0;
    }
    lVar11 = *plVar1;
    *(undefined1 *)(lVar11 + 0x387) = 0;
  }
  *(int *)(lVar11 + 8) = unaff_ESI;
  lVar7 = FUN_008e4ece();
  *(undefined4 *)(lVar11 + 0xc) = *(undefined4 *)(lVar7 + 0x2c);
  lVar7 = FUN_008e4ece();
  *(undefined4 *)(lVar11 + 0x10) = *(undefined4 *)(lVar7 + 0x2c);
  lVar7 = FUN_008e4ece();
  *(undefined4 *)(lVar11 + 0x14) = *(undefined4 *)(lVar7 + 0x2c);
  uVar9 = 8;
  if (unaff_ESI == 0x4801f777) {
    uVar9 = 1;
  }
  *(undefined8 *)(lVar11 + 0x30) = uVar9;
  *(ulonglong *)(lVar11 + 0x48) =
       *(ulonglong *)(lVar11 + 0x48) | (ulonglong)(unaff_ESI != 0x4801f777) * 0x10 + 0x10;
  lVar7 = FUN_008e4ece();
  *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)(lVar7 + 0x38);
  *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar11 + 0x18);
  *(undefined1 *)(lVar11 + 0x58) = 1;
  *(undefined2 *)(lVar11 + 0x37d) = 0;
  if (param_1 == '\0') {
    *(undefined1 *)(lVar11 + 0x59) = 0;
    bVar12 = true;
    bVar3 = true;
  }
  else {
    if ((*(byte *)(param_2 + 7) & 2) == 0) {
      cVar5 = '\0';
LAB_00939ef8:
      bVar12 = true;
      bVar3 = true;
    }
    else {
      FUN_0093a0f8(0xffffffff,param_3);
      FUN_008e8fb4();
      FUN_008e844a();
      *(undefined1 *)(lVar11 + 0x37d) = 1;
      cVar5 = '\x01';
      if (*(char *)(lVar11 + 0xe3) != '\0') goto LAB_00939ef8;
      bVar12 = *(longlong *)(lVar11 + 0xb8) != 0;
      bVar3 = false;
    }
    if ((*(byte *)(param_2 + 7) & 1) != 0) {
      FUN_0093a51a(0xffffffff,param_4);
      FUN_008ea352();
      FUN_008e969a();
      *(undefined1 *)(lVar11 + 0x37e) = 1;
      if (*(char *)(lVar11 + 0x13a) == '\0') {
        bVar12 = false;
        bVar3 = false;
      }
      cVar5 = *(char *)(lVar11 + 0x37d);
    }
    if (cVar5 != '\0') {
      *(undefined1 *)(lVar11 + 0x59) = 1;
      if (*(char *)(lVar11 + 0x37e) == '\0') {
        *(undefined8 *)(lVar11 + 0x48) = 4;
        uVar10 = 0x100944;
        uVar8 = 0x4b;
      }
      else {
        *(undefined8 *)(lVar11 + 0x48) = 8;
        uVar10 = 0x100948;
        uVar8 = 0x23;
      }
      bVar4 = false;
      goto LAB_00939fcb;
    }
    *(char *)(lVar11 + 0x59) = *(char *)(lVar11 + 0x37e);
    if (*(char *)(lVar11 + 0x37e) != '\0') {
      *(undefined8 *)(lVar11 + 0x48) = 2;
      bVar4 = true;
      uVar10 = 0x100942;
      uVar8 = 0x37;
      goto LAB_00939fcb;
    }
  }
  *(undefined8 *)(lVar11 + 0x48) = 1;
  bVar4 = true;
  uVar10 = 0x100941;
  uVar8 = 0x5f;
LAB_00939fcb:
  *(undefined4 *)(lVar11 + 0x50) = uVar8;
  *(ulonglong *)(lVar11 + 0x48) = uVar10;
  if (local_res8 != '\0') {
    uVar6 = (uint)*(byte *)(param_2 + 7);
    *(ulonglong *)(lVar11 + 0x48) =
         (ulonglong)((char)*(byte *)(param_2 + 7) < '\0') * 0x1000 + 0x1000 | uVar10 |
         (ulonglong)((uVar6 & 0x10) >> 4) * 0x40000 + 0x40000 |
         (ulonglong)((uVar6 & 0x20) >> 5) * 0x10000 + 0x10000 |
         (ulonglong)((uVar6 & 0x40) >> 6) * 0x4000 + 0x4000;
  }
  *(undefined4 *)(lVar11 + 0x54) = 1;
  if (bVar3) {
    *(undefined1 *)(unaff_RDI + 0x20) = 1;
    *(undefined8 *)(lVar11 + 0x40) = 1;
  }
  else {
    *(undefined1 *)(unaff_RDI + 0x20) = 0;
    if (bVar12 && !bVar4) {
      *(undefined8 *)(lVar11 + 0x40) = 8;
      *(undefined4 *)(lVar11 + 0x50) = 1;
      *(undefined1 *)(lVar11 + 0x59) = 0;
      uVar8 = 1;
    }
    else {
      *(undefined8 *)(lVar11 + 0x40) = 4;
      *(undefined4 *)(lVar11 + 0x50) = 0;
      uVar8 = 0;
    }
  }
  *(undefined4 *)(unaff_RDI + 0x24) = uVar8;
  *(undefined1 *)(unaff_RDI + 0x21) = 0;
  return;
}


