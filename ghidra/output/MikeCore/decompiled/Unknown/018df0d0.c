// Function: FUN_018df0d0
// Address: 018df0d0
// Size: 3556 bytes
// Class: Unknown


undefined8 * FUN_018df0d0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar11;
  longlong local_210;
  char local_208;
  
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_025683c0;
  pcVar4 = DAT_025683d8;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  if (*unaff_RSI == 0) {
    *unaff_RDI = puVar8;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return unaff_RDI;
  }
  iVar6 = *(int *)(puVar8 + 3);
  FUN_00c8e340();
  *(undefined4 *)(puVar8[2] + (longlong)iVar6) = 0;
  FUN_018d88f0();
  plVar1 = puVar8 + 2;
  if (local_208 == '\0') {
    if (local_210 == 0) goto LAB_018dfd6a;
    FUN_00d50b00();
  }
  else if (local_210 == 0) {
LAB_018dfd6a:
    bVar3 = true;
    goto LAB_018dfd6f;
  }
  plVar2 = (longlong *)**(longlong **)(*(longlong *)(local_210 + 0x18) + 0x10);
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  lVar11 = DAT_027c7e08;
  if (DAT_027c7e08 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar2 + 0x50))();
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    iVar6 = *(int *)(puVar8 + 3);
    FUN_00c8e340();
    *(undefined4 *)(*plVar1 + (longlong)iVar6) = 7;
  }
  lVar11 = DAT_027816f0;
  if (DAT_027816f0 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar2 + 0x50))();
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    iVar6 = *(int *)(puVar8 + 3);
    FUN_00c8e340();
    *(undefined4 *)(*plVar1 + (longlong)iVar6) = 5;
  }
  lVar11 = DAT_027df228;
  if (DAT_027df228 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar2 + 0x50))();
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    iVar6 = *(int *)(puVar8 + 3);
    FUN_00c8e340();
    *(undefined4 *)(*plVar1 + (longlong)iVar6) = 8;
  }
  lVar11 = DAT_02781710;
  if (DAT_02781710 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar2 + 0x50))();
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    iVar6 = *(int *)(puVar8 + 3);
    FUN_00c8e340();
    *(undefined4 *)(*plVar1 + (longlong)iVar6) = 3;
  }
  lVar11 = DAT_027c7e18;
  if (DAT_027c7e18 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar2 + 0x50))();
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    iVar6 = *(int *)(puVar8 + 3);
    FUN_00c8e340();
    *(undefined4 *)(*plVar1 + (longlong)iVar6) = 6;
  }
  lVar11 = DAT_027c7dd8;
  if (DAT_027c7dd8 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar2 + 0x50))();
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    iVar6 = *(int *)(puVar8 + 3);
    FUN_00c8e340();
    *(undefined4 *)(*plVar1 + (longlong)iVar6) = 9;
  }
  lVar11 = DAT_027c7de0;
  if (DAT_027c7de0 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar2 + 0x50))();
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    iVar6 = *(int *)(puVar8 + 3);
    FUN_00c8e340();
    *(undefined4 *)(*plVar1 + (longlong)iVar6) = 3;
  }
  lVar11 = DAT_027df3b8;
  if (DAT_027df3b8 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar2 + 0x50))();
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    iVar6 = *(int *)(puVar8 + 3);
    FUN_00c8e340();
    *(undefined4 *)(*plVar1 + (longlong)iVar6) = 4;
  }
  lVar11 = DAT_027df400;
  if (DAT_027df400 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar2 + 0x50))();
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    iVar6 = *(int *)(puVar8 + 3);
    FUN_00c8e340();
    *(undefined4 *)(*plVar1 + (longlong)iVar6) = 9;
  }
  lVar11 = DAT_027818f8;
  if (DAT_027818f8 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar2 + 0x50))();
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    iVar6 = *(int *)(puVar8 + 3);
    FUN_00c8e340();
    *(undefined4 *)(*plVar1 + (longlong)iVar6) = 10;
  }
  lVar11 = DAT_027df290;
  if (DAT_027df290 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar2 + 0x50))();
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    iVar6 = *(int *)(puVar8 + 3);
    FUN_00c8e340();
    *(undefined4 *)(*plVar1 + (longlong)iVar6) = 8;
  }
  lVar11 = DAT_027df310;
  if (DAT_027df310 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar2 + 0x50))();
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    iVar6 = *(int *)(puVar8 + 3);
    FUN_00c8e340();
    *(undefined4 *)(*plVar1 + (longlong)iVar6) = 2;
  }
  lVar11 = DAT_027df3a8;
  if (DAT_027df3a8 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar2 + 0x50))();
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    iVar6 = *(int *)(puVar8 + 3);
    FUN_00c8e340();
    *(undefined4 *)(*plVar1 + (longlong)iVar6) = 10;
  }
  lVar11 = DAT_027df410;
  if (DAT_027df410 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar2 + 0x50))();
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    iVar6 = *(int *)(puVar8 + 3);
    FUN_00c8e340();
    *(undefined4 *)(*plVar1 + (longlong)iVar6) = 10;
  }
  lVar11 = DAT_027df438;
  if (DAT_027df438 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar2 + 0x50))();
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    iVar6 = *(int *)(puVar8 + 3);
    FUN_00c8e340();
    *(undefined4 *)(*plVar1 + (longlong)iVar6) = 4;
  }
  lVar11 = DAT_027df460;
  if (DAT_027df460 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar2 + 0x50))();
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    iVar6 = *(int *)(puVar8 + 3);
    FUN_00c8e340();
    *(undefined4 *)(*plVar1 + (longlong)iVar6) = 2;
  }
  lVar11 = DAT_027df480;
  if (DAT_027df480 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar2 + 0x50))();
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    iVar6 = *(int *)(puVar8 + 3);
    FUN_00c8e340();
    *(undefined4 *)(*plVar1 + (longlong)iVar6) = 2;
  }
  lVar11 = DAT_027df2d0;
  if (DAT_027df2d0 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar2 + 0x50))();
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    iVar6 = *(int *)(puVar8 + 3);
    FUN_00c8e340();
    *(undefined4 *)(*plVar1 + (longlong)iVar6) = 2;
  }
  lVar11 = DAT_027df360;
  if (DAT_027df360 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar2 + 0x50))();
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    iVar6 = *(int *)(puVar8 + 3);
    FUN_00c8e340();
    *(undefined4 *)(*plVar1 + (longlong)iVar6) = 10;
  }
  lVar11 = DAT_027c7df8;
  if (DAT_027c7df8 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar2 + 0x50))();
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    iVar6 = *(int *)(puVar8 + 3);
    FUN_00c8e340();
    *(undefined4 *)(puVar8[2] + (longlong)iVar6) = 3;
    iVar6 = *(int *)(puVar8 + 3);
    FUN_00c8e340();
    *(undefined4 *)(puVar8[2] + (longlong)iVar6) = 6;
    iVar6 = *(int *)(puVar8 + 3);
    FUN_00c8e340();
    *(undefined4 *)(*plVar1 + (longlong)iVar6) = 9;
  }
  lVar11 = DAT_0270b790;
  if (DAT_0270b790 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar2 + 0x50))();
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    iVar6 = *(int *)(puVar8 + 3);
    FUN_00c8e340();
    *(undefined4 *)(puVar8[2] + (longlong)iVar6) = 4;
    iVar6 = *(int *)(puVar8 + 3);
    FUN_00c8e340();
    *(undefined4 *)(*plVar1 + (longlong)iVar6) = 8;
  }
  lVar11 = DAT_027df248;
  if (DAT_027df248 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar2 + 0x50))();
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    iVar6 = *(int *)(puVar8 + 3);
    FUN_00c8e340();
    *(undefined4 *)(puVar8[2] + (longlong)iVar6) = 3;
    iVar6 = *(int *)(puVar8 + 3);
    FUN_00c8e340();
    *(undefined4 *)(*plVar1 + (longlong)iVar6) = 10;
  }
  lVar11 = DAT_027df470;
  if (DAT_027df470 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar2 + 0x50))();
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    iVar6 = *(int *)(puVar8 + 3);
    FUN_00c8e340();
    *(undefined4 *)(puVar8[2] + (longlong)iVar6) = 2;
    iVar6 = *(int *)(puVar8 + 3);
    FUN_00c8e340();
    *(undefined4 *)(*plVar1 + (longlong)iVar6) = 5;
  }
  lVar11 = DAT_027df3f0;
  if (DAT_027df3f0 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar2 + 0x50))();
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    iVar6 = *(int *)(puVar8 + 3);
    FUN_00c8e340();
    *(undefined4 *)(puVar8[2] + (longlong)iVar6) = 7;
    iVar6 = *(int *)(puVar8 + 3);
    FUN_00c8e340();
    *(undefined4 *)(*plVar1 + (longlong)iVar6) = 9;
  }
  FUN_00d50b20();
  bVar3 = false;
LAB_018dfd6f:
  puVar9 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &DAT_025683c0;
  (*pcVar4)();
  FUN_00c92170();
  FUN_00c92160();
  iVar6 = FUN_01715480();
  if (3 < *(int *)(puVar8 + 3)) {
    lVar11 = 0;
    do {
      iVar7 = *(int *)(*plVar1 + lVar11 * 4);
      iVar10 = *(int *)(puVar9 + 3);
      FUN_00c8e340();
      iVar7 = 0xc - iVar7;
      iVar7 = iVar7 + (((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f)) * -0xc + iVar6;
      *(uint *)(puVar9[2] + (longlong)iVar10) =
           iVar7 + (((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f)) * -0xc;
      lVar11 = lVar11 + 1;
      iVar7 = *(int *)(puVar8 + 3);
      iVar10 = iVar7 + 3;
      if (-1 < iVar7) {
        iVar10 = iVar7;
      }
    } while (lVar11 < iVar10 >> 2);
  }
  *unaff_RDI = puVar9;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (!bVar3) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return unaff_RDI;
}


