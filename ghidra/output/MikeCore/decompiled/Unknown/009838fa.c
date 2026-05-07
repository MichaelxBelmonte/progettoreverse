// Function: FUN_009838fa
// Address: 009838fa
// Size: 879 bytes
// Class: Unknown
// String references:
//   "No items to parse"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Asn1ParserCert...
//   "virtual pace::SharedAsn1_T pace::Asn1ParserCert::FindExtensionItemByOid(const uint8_t *)"


/* WARNING: Removing unreachable block (ram,0x00983b9c) */
/* WARNING: Removing unreachable block (ram,0x00983b69) */
/* WARNING: Removing unreachable block (ram,0x00983b7b) */
/* WARNING: Removing unreachable block (ram,0x00983a5e) */
/* WARNING: Removing unreachable block (ram,0x00983a70) */
/* WARNING: Removing unreachable block (ram,0x00983a07) */
/* WARNING: Removing unreachable block (ram,0x00983a19) */
/* WARNING: Removing unreachable block (ram,0x00983ad0) */
/* WARNING: Removing unreachable block (ram,0x00983b0e) */
/* WARNING: Removing unreachable block (ram,0x00983b3d) */
/* WARNING: Removing unreachable block (ram,0x00983b4f) */
/* WARNING: Removing unreachable block (ram,0x00983b60) */
/* WARNING: Removing unreachable block (ram,0x00983b8c) */
/* WARNING: Removing unreachable block (ram,0x00983a91) */
/* WARNING: Removing unreachable block (ram,0x00983aa3) */
/* WARNING: Removing unreachable block (ram,0x00983be2) */
/* WARNING: Removing unreachable block (ram,0x00983bf4) */
/* WARNING: Removing unreachable block (ram,0x00983bcd) */
/* WARNING: Removing unreachable block (ram,0x00983c0b) */
/* WARNING: Removing unreachable block (ram,0x00983c1d) */

undefined8 * FUN_009838fa(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar7;
  undefined4 uVar8;
  int local_64;
  longlong *local_58;
  longlong *plStack_50;
  
  plVar4 = plStack_50;
  plVar2 = local_58;
  uVar8 = 0;
  if (unaff_RSI[1] == 0) {
    FUN_00925fd0();
    uVar6 = FUN_00926010();
    uVar8 = FUN_00928ab0("virtual pace::SharedAsn1_T pace::Asn1ParserCert::FindExtensionItemByOid(const uint8_t *)"
                         ,0xf2);
    uVar8 = FUN_009c720b(uVar8,uVar6);
  }
  (**(code **)(*unaff_RSI + 0x20))(uVar8,&DAT_023cd01f);
  local_64 = 1;
  plVar7 = (longlong *)0x0;
  while( true ) {
    plVar5 = plStack_50;
    (**(code **)(*plVar2 + 0x40))(0x30,local_64);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar7 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_58 == (longlong *)0x0) break;
    (**(code **)(*local_58 + 0x40))(6,1);
    local_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
    local_64 = local_64 + 1;
    plVar7 = plVar5;
  }
  *unaff_RDI = 0;
  unaff_RDI[1] = plStack_50;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar4 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  return unaff_RDI;
}


