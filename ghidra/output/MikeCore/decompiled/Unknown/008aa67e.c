// Function: FUN_008aa67e
// Address: 008aa67e
// Size: 1106 bytes
// Class: Unknown
// String references:
//   "getUserAccountList"
//   "getUserAccountList failed: unknown result"


/* WARNING: Removing unreachable block (ram,0x008aaaa8) */
/* WARNING: Removing unreachable block (ram,0x008aa92b) */
/* WARNING: Removing unreachable block (ram,0x008aa94b) */
/* WARNING: Removing unreachable block (ram,0x008aa954) */

void FUN_008aa67e(void)

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
  char local_5c [40];
  int local_34;
  
  pcVar6 = local_5c;
  local_5c[0] = '\0';
  local_5c[1] = '\0';
  local_5c[2] = '\0';
  local_5c[3] = '\0';
  local_5c[4] = '\0';
  local_5c[5] = '\0';
  local_5c[6] = '\0';
  local_5c[7] = '\0';
  local_5c[8] = '\0';
  local_5c[9] = '\0';
  local_5c[10] = '\0';
  local_5c[0xb] = '\0';
  local_5c[0xc] = '\0';
  local_5c[0xd] = '\0';
  local_5c[0xe] = '\0';
  local_5c[0xf] = '\0';
  local_5c[0x10] = '\0';
  local_5c[0x11] = '\0';
  local_5c[0x12] = '\0';
  local_5c[0x13] = '\0';
  local_5c[0x14] = '\0';
  local_5c[0x15] = '\0';
  local_5c[0x16] = '\0';
  local_5c[0x17] = '\0';
  local_5c[0x18] = '\0';
  local_5c[0x19] = '\0';
  local_5c[0x1a] = '\0';
  local_5c[0x1b] = '\0';
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
  FUN_00897e6a();
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
  FUN_0089c4b4();
  uVar8 = FUN_008d3e60();
  *puVar5 = &DAT_02517398;
  *(undefined4 *)(puVar5 + 4) = 5;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(uVar8,FUN_0088c8a0);
}


