// Function: FUN_00988b32
// Address: 00988b32
// Size: 797 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Asn1ParserCert...
//   "KeyUsage extension is missing"
//   "KeyUsage extension bit string is missing"
//   "virtual void pace::Asn1ParserCert::SetKeyUsage(uint32_t)"


/* WARNING: Removing unreachable block (ram,0x00988e3d) */
/* WARNING: Removing unreachable block (ram,0x00988d28) */
/* WARNING: Removing unreachable block (ram,0x00988c13) */
/* WARNING: Removing unreachable block (ram,0x00988c25) */
/* WARNING: Removing unreachable block (ram,0x00988d09) */
/* WARNING: Removing unreachable block (ram,0x00988c94) */
/* WARNING: Removing unreachable block (ram,0x00988cf4) */
/* WARNING: Removing unreachable block (ram,0x00988d43) */
/* WARNING: Removing unreachable block (ram,0x00988d72) */
/* WARNING: Removing unreachable block (ram,0x00988da3) */
/* WARNING: Removing unreachable block (ram,0x00988e48) */

void FUN_00988b32(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  void *pvVar5;
  void *pvVar6;
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  undefined4 uVar7;
  longlong *local_78;
  longlong *plStack_70;
  
  (**(code **)(*unaff_RDI + 0x38))(0,&DAT_023c8b86);
  if (local_78 == (longlong *)0x0) {
    FUN_00925fd0();
    uVar3 = FUN_00926010();
    uVar7 = FUN_00928ab0("virtual void pace::Asn1ParserCert::SetKeyUsage(uint32_t)",0x648);
    FUN_009c720b(uVar7,uVar3);
  }
  (**(code **)(*local_78 + 0x40))(3,1);
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_70 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_78 == (longlong *)0x0) {
    FUN_00925fd0();
    uVar3 = FUN_00926010();
    uVar7 = FUN_00928ab0("virtual void pace::Asn1ParserCert::SetKeyUsage(uint32_t)",0x64c);
    FUN_009c720b(uVar7,uVar3);
  }
  puVar4 = operator_new(0xffffffff);
  *puVar4 = 0;
  pvVar6 = (void *)0x3fffffffffffffff;
  pvVar5 = operator_new(0xffffffff);
  *(char *)((longlong)pvVar5 + 1) = (char)((uint)unaff_ESI >> 0x18);
  _memcpy(pvVar6,(void *)((longlong)&MACH_HEADER.magic + 1),param_3);
  if (puVar4 != (undefined1 *)0x0) {
    operator_delete(pvVar6);
  }
  (**(code **)(*local_78 + 0x48))();
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_70 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  return;
}


