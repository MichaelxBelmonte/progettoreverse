// Function: FUN_009a934e
// Address: 009a934e
// Size: 1189 bytes
// Class: GNString


undefined8 FUN_009a934e(char param_1,undefined8 param_2,longlong param_3,byte *param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  byte *pbVar4;
  longlong lVar5;
  id *piVar6;
  undefined8 uVar7;
  id *piVar8;
  locale *this;
  byte *pbVar9;
  ulonglong uVar10;
  id *piVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong unaff_RDI;
  id *piVar14;
  id *local_80;
  
  lVar2 = *(longlong *)PTR____stack_chk_guard_024a9898;
  lVar5 = *(longlong *)(unaff_RDI + 0x138);
  if (*(longlong *)(unaff_RDI + 0x140) != lVar5) {
    lVar3 = (longlong)*(int *)(param_3 + 0x18);
    bVar1 = *(byte *)(lVar5 + lVar3 * 0x18);
    if ((bVar1 & 1) == 0) {
      uVar13 = (ulonglong)(bVar1 >> 1);
      lVar12 = lVar5 + 1 + lVar3 * 0x18;
    }
    else {
      lVar12 = *(longlong *)(lVar5 + 0x10 + lVar3 * 0x18);
      uVar13 = *(ulonglong *)(lVar5 + 8 + lVar3 * 0x18);
    }
    if ((*param_4 & 1) == 0) {
      pbVar9 = param_4 + 1;
      uVar10 = (ulonglong)(*param_4 >> 1);
    }
    else {
      pbVar9 = *(byte **)(param_4 + 0x10);
      uVar10 = *(ulonglong *)(param_4 + 8);
    }
    pbVar9 = pbVar9 + uVar10;
    pbVar4 = (byte *)FUN_009cfa40();
    if (pbVar4 != pbVar9) {
      FUN_00a15da2(pbVar4,uVar13 + lVar12);
    }
  }
  lVar5 = *(longlong *)(unaff_RDI + 0x120);
  if (*(longlong *)(unaff_RDI + 0x128) != lVar5) {
    lVar3 = (longlong)*(int *)(param_3 + 0x18);
    bVar1 = *(byte *)(lVar5 + lVar3 * 0x18);
    if ((bVar1 & 1) == 0) {
      uVar13 = (ulonglong)(bVar1 >> 1);
      lVar12 = lVar5 + 1 + lVar3 * 0x18;
    }
    else {
      lVar12 = *(longlong *)(lVar5 + 0x10 + lVar3 * 0x18);
      uVar13 = *(ulonglong *)(lVar5 + 8 + lVar3 * 0x18);
    }
    if ((*param_4 & 1) == 0) {
      pbVar9 = param_4 + 1;
      uVar10 = (ulonglong)(*param_4 >> 1);
    }
    else {
      pbVar9 = *(byte **)(param_4 + 0x10);
      uVar10 = *(ulonglong *)(param_4 + 8);
    }
    pbVar9 = pbVar9 + uVar10;
    pbVar4 = (byte *)FUN_009cfa40();
    if (pbVar4 != pbVar9) {
      FUN_00a15da2(pbVar4,uVar13 + lVar12);
    }
  }
  lVar5 = *(longlong *)(unaff_RDI + 0x108);
  if (*(longlong *)(unaff_RDI + 0x110) != lVar5) {
    lVar3 = (longlong)*(int *)(param_3 + 0x10);
    bVar1 = *(byte *)(lVar5 + lVar3 * 0x18);
    if ((bVar1 & 1) == 0) {
      uVar13 = (ulonglong)(bVar1 >> 1);
      lVar12 = lVar5 + 1 + lVar3 * 0x18;
    }
    else {
      lVar12 = *(longlong *)(lVar5 + 0x10 + lVar3 * 0x18);
      uVar13 = *(ulonglong *)(lVar5 + 8 + lVar3 * 0x18);
    }
    if ((*param_4 & 1) == 0) {
      pbVar9 = param_4 + 1;
      uVar10 = (ulonglong)(*param_4 >> 1);
    }
    else {
      pbVar9 = *(byte **)(param_4 + 0x10);
      uVar10 = *(ulonglong *)(param_4 + 8);
    }
    pbVar9 = pbVar9 + uVar10;
    pbVar4 = (byte *)FUN_009cfa40();
    if (pbVar4 != pbVar9) {
      FUN_00a15da2(pbVar4,uVar13 + lVar12);
    }
  }
  piVar8 = *(id **)(unaff_RDI + 0xf0);
  if (*(id **)(unaff_RDI + 0xf8) != piVar8) {
    lVar5 = (longlong)*(int *)(param_3 + 0x10);
    if (((byte)piVar8[lVar5 * 0x18] & 1) == 0) {
      uVar13 = (ulonglong)((byte)piVar8[lVar5 * 0x18] >> 1);
      piVar14 = piVar8 + lVar5 * 0x18 + 1;
    }
    else {
      piVar14 = *(id **)(piVar8 + lVar5 * 0x18 + 0x10);
      uVar13 = *(ulonglong *)(piVar8 + lVar5 * 0x18 + 8);
    }
    if ((*param_4 & 1) == 0) {
      pbVar9 = param_4 + 1;
      uVar10 = (ulonglong)(*param_4 >> 1);
    }
    else {
      pbVar9 = *(byte **)(param_4 + 0x10);
      uVar10 = *(ulonglong *)(param_4 + 8);
    }
    piVar11 = (id *)(pbVar9 + uVar10);
    piVar6 = (id *)FUN_009cfa40();
    piVar8 = local_80;
    if (piVar6 != piVar11) {
      FUN_00a15da2(piVar6,piVar14 + uVar13);
      piVar8 = piVar6;
    }
  }
  if ((*param_4 & 1) == 0) {
    param_4 = param_4 + 1;
  }
  else {
    param_4 = *(byte **)(param_4 + 0x10);
  }
  std::ios_base::getloc();
  std::locale::use_facet(piVar8);
  this = (locale *)(ulonglong)(uint)(int)param_1;
  uVar7 = std::time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>>>::put
                    (this,param_2,param_3,param_4);
  std::locale::~locale(this);
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == lVar2) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


