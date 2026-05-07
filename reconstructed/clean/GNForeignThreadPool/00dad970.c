// Function: FUN_00dad970
// Address: 00dad970
// Size: 887 bytes
// Class: GNForeignThreadPool
// === GNForeignThreadPool properties ===
//   GNThreadPriorityGroup _priority
//                   _threadPool
//                   _allocCount
//                   _allocLock
//                   _allocThread
//                   _indexHint


uint64_t FUN_00dad970(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int64_t *plVar5;
  uint64_t unaff_RBX;
  uint64_t uVar6;
  int64_t this_ptr;
  int64_t *plVar7;
  int iVar8;
  int local_5c;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  
  cVar4 = FUN_00dab660();
  *(char *)(this_ptr + 0x48) = cVar4;
  if (cVar4 != '\0') {
    cVar4 = FUN_00dab660();
    *(char *)(this_ptr + 0x48) = cVar4;
    if (cVar4 != '\0') {
      if (local_5c < 1) {
        uVar6 = CONCAT71((int7)((uint64_t)unaff_RBX >> 8),1);
      }
      else {
        iVar8 = 0;
        plVar7 = (int64_t *)0x0;
        bVar1 = false;
        local_40 = (int64_t *)0x0;
        bVar2 = false;
        do {
          cVar4 = FUN_00dab660();
          *(char *)(this_ptr + 0x48) = cVar4;
          if (cVar4 == '\0') {
LAB_00dadcfd:
            uVar6 = 0;
            goto LAB_00dadcff;
          }
          cVar4 = FUN_00dab660();
          *(char *)(this_ptr + 0x48) = cVar4;
          if (cVar4 == '\0') goto LAB_00dadcfd;
          FUN_00dabdf0();
          if (plVar7 == local_50) {
            if ((bVar1) || (plVar7 == (int64_t *)0x0)) goto joined_r0x00dadac4;
            if (local_48 == '\0') {
              FUN_00d50b00();
              plVar5 = plVar7;
              goto LAB_00dadae0;
            }
            *(void*)(this_ptr + 0x48) = 1;
            bVar1 = true;
          }
          else {
            if (local_48 == '\0') {
              if (local_50 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              plVar5 = local_50;
              if ((bVar1) && (plVar7 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
LAB_00dadae0:
              bVar1 = true;
              plVar7 = plVar5;
joined_r0x00dadac4:
              plVar5 = plVar7;
              bVar3 = bVar1;
              if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              bVar3 = true;
              plVar5 = local_50;
              if ((bVar1) && (plVar7 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            bVar1 = bVar3;
            plVar7 = plVar5;
            *(bool *)(this_ptr + 0x48) = plVar7 != (int64_t *)0x0;
            if (plVar7 == (int64_t *)0x0) {
              plVar7 = (int64_t *)0x0;
              goto LAB_00dadcfd;
            }
          }
          FUN_00dace50();
          if (plVar7 == local_50) {
            if (bVar1) {
              bVar3 = bVar1;
              if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              bVar3 = true;
              if (local_48 == '\0') {
                FUN_00d50b00();
              }
            }
          }
          else {
            plVar7 = local_50;
            if (local_48 == '\0') {
              if (local_50 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              bVar3 = true;
              if (bVar1) {
                FUN_00d50b20();
              }
            }
            else {
              bVar3 = true;
              if (bVar1) {
                FUN_00d50b20();
              }
            }
          }
          bVar1 = bVar3;
          plVar5 = (int64_t *)FUN_00e8fc40();
          FUN_0002f270();
          (**(code **)(*plVar5 + 0x18))();
          if (plVar5 == local_40) {
            plVar5 = local_40;
            if (bVar2) {
              FUN_00d50b20();
              bVar3 = bVar2;
            }
            else {
              bVar3 = true;
            }
          }
          else {
            bVar3 = true;
            if ((bVar2) && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          bVar2 = bVar3;
          local_40 = plVar5;
          FUN_00c7ee10();
          FUN_00c811a0();
          local_48 = '\0';
          FUN_00d21140();
          iVar8 = iVar8 + 1;
          local_50 = local_40;
        } while (iVar8 < local_5c);
        bVar2 = true;
        bVar1 = true;
        uVar6 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
LAB_00dadcff:
        if ((bVar2) && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((bVar1) && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      goto LAB_00dadccb;
    }
  }
  uVar6 = 0;
LAB_00dadccb:
  return uVar6 & 0xffffffff;
}

