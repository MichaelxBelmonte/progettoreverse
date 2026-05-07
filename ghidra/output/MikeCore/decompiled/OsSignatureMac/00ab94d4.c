// Function: FUN_00ab94d4
// Address: 00ab94d4
// Size: 605 bytes
// Class: OsSignatureMac


void FUN_00ab94d4(ulong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  string *this;
  string *psVar8;
  ulonglong uVar9;
  longlong *unaff_RDI;
  longlong lVar10;
  byte *local_res8;
  longlong local_res10;
  longlong local_res18;
  undefined4 local_res20;
  undefined4 in_stack_00000028;
  longlong local_1b0;
  
  lVar2 = *(longlong *)PTR____stack_chk_guard_024a9898;
  unaff_RDI[1] = 0;
  *unaff_RDI = 0;
  pvVar5 = operator_new(param_1);
  FUN_0097c240();
  puVar6 = operator_new(param_1);
  puVar6[2] = 0;
  puVar6[1] = 0;
  *puVar6 = &DAT_0252b020;
  puVar6[3] = pvVar5;
  *unaff_RDI = (longlong)pvVar5;
  plVar3 = (longlong *)unaff_RDI[1];
  unaff_RDI[1] = (longlong)puVar6;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plVar3 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar10 = *unaff_RDI;
  *(undefined2 *)(lVar10 + 0x130) = 0x101;
  *(undefined4 *)(lVar10 + 8) = local_res20;
  *(undefined4 *)(lVar10 + 0xc) = in_stack_00000028;
  FUN_0098ede4();
  FUN_0098ef68();
  lVar10 = *unaff_RDI;
  uVar4 = FUN_0098f810();
  uVar9 = (ulonglong)uVar4;
  psVar8 = *(string **)(lVar10 + 0x118);
  uVar7 = *(longlong *)(lVar10 + 0x120) - (longlong)psVar8;
  if (uVar7 < uVar9) {
    FUN_0088d550();
    psVar8 = *(string **)(lVar10 + 0x118);
  }
  else if (uVar9 < uVar7) {
    *(string **)(lVar10 + 0x120) = psVar8 + uVar9;
  }
  this = (string *)0x0;
  (**(code **)(local_1b0 + 0x48))();
  lVar10 = *unaff_RDI;
  *(undefined1 *)(lVar10 + 0x139) = 1;
  if (local_res10 == 0) {
    *(undefined1 *)(lVar10 + 0x132) = 0;
  }
  else {
    *(undefined1 *)(lVar10 + 0x132) = 1;
    std::string::assign((char *)this);
    lVar10 = *unaff_RDI;
  }
  if (local_res18 == 0) {
    *(undefined1 *)(lVar10 + 0x133) = 0;
  }
  else {
    *(undefined1 *)(lVar10 + 0x133) = 1;
    std::string::assign((char *)this);
    lVar10 = *unaff_RDI;
  }
  *(undefined1 *)(lVar10 + 0x134) = 1;
  std::string::operator=(this,psVar8);
  lVar10 = *unaff_RDI;
  if (local_res8 != (byte *)0x0) {
    if ((*local_res8 & 1) == 0) {
      uVar7 = (ulonglong)(*local_res8 >> 1);
    }
    else {
      uVar7 = *(ulonglong *)(local_res8 + 8);
    }
    if (uVar7 != 0) {
      *(undefined1 *)(lVar10 + 0x136) = 1;
      std::string::operator=(this,psVar8);
      lVar10 = *unaff_RDI;
    }
  }
  *(undefined1 *)(lVar10 + 0x110) = 1;
  FUN_008d6858();
  std::string::operator=(this,psVar8);
  *(undefined1 *)(*unaff_RDI + 0x111) = 1;
  std::string::operator=(this,psVar8);
  FUN_0098edfa();
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


