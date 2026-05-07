// Function: FUN_00983ff4
// Address: 00983ff4
// Size: 1027 bytes
// Class: Unknown
// String references:
//   "No items to parse"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Asn1ParserCert...
//   "virtual pace::SharedAsn1_T pace::Asn1ParserCert::FindSubjectOrIssuerByOID(const uint8_t *, bool)"


/* WARNING: Removing unreachable block (ram,0x00984370) */
/* WARNING: Removing unreachable block (ram,0x00984382) */
/* WARNING: Removing unreachable block (ram,0x009842fa) */
/* WARNING: Removing unreachable block (ram,0x0098430c) */
/* WARNING: Removing unreachable block (ram,0x0098419f) */
/* WARNING: Removing unreachable block (ram,0x009841b1) */
/* WARNING: Removing unreachable block (ram,0x009840ed) */
/* WARNING: Removing unreachable block (ram,0x00984100) */
/* WARNING: Removing unreachable block (ram,0x0098411b) */
/* WARNING: Removing unreachable block (ram,0x0098412d) */
/* WARNING: Removing unreachable block (ram,0x00984232) */
/* WARNING: Removing unreachable block (ram,0x00984244) */
/* WARNING: Removing unreachable block (ram,0x009841ce) */
/* WARNING: Removing unreachable block (ram,0x00984202) */
/* WARNING: Removing unreachable block (ram,0x00984214) */
/* WARNING: Removing unreachable block (ram,0x00984229) */
/* WARNING: Removing unreachable block (ram,0x00984259) */
/* WARNING: Removing unreachable block (ram,0x00984265) */
/* WARNING: Removing unreachable block (ram,0x0098429b) */
/* WARNING: Removing unreachable block (ram,0x009842c8) */
/* WARNING: Removing unreachable block (ram,0x009842da) */
/* WARNING: Removing unreachable block (ram,0x009842f1) */
/* WARNING: Removing unreachable block (ram,0x00984323) */
/* WARNING: Removing unreachable block (ram,0x0098432c) */
/* WARNING: Removing unreachable block (ram,0x00984398) */
/* WARNING: Removing unreachable block (ram,0x009843ab) */
/* WARNING: Removing unreachable block (ram,0x0098435a) */

undefined8 * FUN_00983ff4(char param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar7;
  undefined4 uVar8;
  longlong *local_48;
  longlong *plStack_40;
  
  plVar4 = plStack_40;
  plVar2 = local_48;
  uVar8 = 0;
  if (unaff_RSI[1] == 0) {
    FUN_00925fd0();
    uVar6 = FUN_00926010();
    uVar8 = FUN_00928ab0("virtual pace::SharedAsn1_T pace::Asn1ParserCert::FindSubjectOrIssuerByOID(const uint8_t *, bool)"
                         ,0x159);
    uVar8 = FUN_009c720b(uVar8,uVar6);
  }
  if (param_1 == '\0') {
    (**(code **)(*unaff_RSI + 0x20))(uVar8,&DAT_023cd036);
  }
  else {
    (**(code **)(*unaff_RSI + 0x20))(uVar8,&DAT_023cd02f);
  }
  iVar7 = 1;
  while (plVar5 = plStack_40, (**(code **)(*plVar2 + 0x40))(0x31,iVar7), local_48 != (longlong *)0x0
        ) {
    (**(code **)(*local_48 + 0x40))(0x30,1);
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    iVar7 = iVar7 + 1;
  }
  *unaff_RDI = 0;
  unaff_RDI[1] = plStack_40;
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


