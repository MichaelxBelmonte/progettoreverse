// Function: FUN_009256c4
// Address: 009256c4
// Size: 986 bytes
// Class: Unknown
// String references:
//   "releaseDatabaseLock"


/* WARNING: Removing unreachable block (ram,0x00925a71) */

void FUN_009256c4(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined *puVar7;
  string *this;
  string *psVar8;
  longlong unaff_RDI;
  undefined4 uVar9;
  char local_4c [4];
  ulonglong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  int local_24;
  
  pcVar6 = local_4c;
  local_4c[0] = '\0';
  local_4c[1] = '\0';
  local_4c[2] = '\0';
  local_4c[3] = '\0';
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  psVar8 = (string *)&local_24;
  (**(code **)(**(longlong **)(unaff_RDI + 0x28) + 0xb8))();
  if (local_24 != 2) {
    if (local_24 == 3) {
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
      uVar9 = std::string::string(this,psVar8);
      *puVar5 = &DAT_02517398;
      *(undefined4 *)(puVar5 + 4) = 0;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(uVar9,FUN_0088c8a0);
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
  puVar7 = &DAT_0251b400;
  FUN_00920d60();
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
  FUN_008d6212();
  if ((local_48 & 1) != 0) {
    operator_delete(puVar7);
  }
  return;
}


