// Function: FUN_009241b6
// Address: 009241b6
// Size: 1114 bytes
// Class: Unknown
// String references:
//   "getDatabaseCommitLock"
//   "getDatabaseCommitLock failed: unknown result"


/* WARNING: Removing unreachable block (ram,0x009245e8) */
/* WARNING: Removing unreachable block (ram,0x00924464) */
/* WARNING: Removing unreachable block (ram,0x00924488) */
/* WARNING: Removing unreachable block (ram,0x00924491) */

void FUN_009241b6(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  char *pcVar6;
  string *this;
  string *psVar7;
  longlong unaff_RDI;
  undefined4 uVar8;
  char local_64 [12];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  int local_34;
  
  pcVar6 = local_64;
  local_64[0] = '\0';
  local_64[1] = '\0';
  local_64[2] = '\0';
  local_64[3] = '\0';
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  psVar7 = (string *)&local_34;
  (**(code **)(**(longlong **)(unaff_RDI + 0x28) + 0xb8))();
  if (local_34 != 2) {
    if (local_34 == 3) {
      this = (string *)&DAT_02517398;
      FUN_00ad1420();
      (**(code **)(**(longlong **)(unaff_RDI + 0x28) + 0xc0))();
      plVar2 = *(longlong **)(*(longlong *)(unaff_RDI + 0x28) + 8);
      plVar3 = *(longlong **)(*(longlong *)(unaff_RDI + 0x28) + 0x10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar3[1] = plVar3[1] + 1;
        UNLOCK();
      }
      (**(code **)(*plVar2 + 0x40))();
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar3 + 1;
        lVar1 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
          std::__shared_weak_count::__release_weak();
        }
      }
      puVar5 = (undefined8 *)___cxa_allocate_exception();
      *puVar5 = &DAT_02517278;
      uVar8 = std::string::string(this,psVar7);
      *puVar5 = &DAT_02517398;
      *(undefined4 *)(puVar5 + 4) = 0;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(uVar8,FUN_0088c8a0);
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x28) + 0x160))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x28) + 0xc0))();
    plVar2 = *(longlong **)(*(longlong *)(unaff_RDI + 0x28) + 8);
    plVar3 = *(longlong **)(*(longlong *)(unaff_RDI + 0x28) + 0x10);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar3[1] = plVar3[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar2 + 0x40))();
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar3 + 1;
      lVar1 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  iVar4 = std::string::compare(pcVar6);
  if (iVar4 != 0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x28) + 0x160))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x28) + 0xc0))();
    plVar2 = *(longlong **)(*(longlong *)(unaff_RDI + 0x28) + 8);
    plVar3 = *(longlong **)(*(longlong *)(unaff_RDI + 0x28) + 0x10);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar3[1] = plVar3[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar2 + 0x40))();
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar3 + 1;
      lVar1 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  FUN_00920376();
  (**(code **)(**(longlong **)(unaff_RDI + 0x28) + 0xc0))();
  plVar2 = *(longlong **)(*(longlong *)(unaff_RDI + 0x28) + 8);
  plVar3 = *(longlong **)(*(longlong *)(unaff_RDI + 0x28) + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar3[1] = plVar3[1] + 1;
    UNLOCK();
  }
  (**(code **)(*plVar2 + 0x40))();
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar5 = (undefined8 *)___cxa_allocate_exception();
  FUN_0092158c();
  uVar8 = FUN_008d3e60();
  *puVar5 = &DAT_02517398;
  *(undefined4 *)(puVar5 + 4) = 5;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(uVar8,FUN_0088c8a0);
}


