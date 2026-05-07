// Function: FUN_00ab85e2
// Address: 00ab85e2
// Size: 741 bytes
// Class: OsSignatureMac

int64_t * FUN_00ab85e2(int64_t param_1,int param_2)

{
  int64_t *plVar1;
  int iVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t lVar5;
  void *pvVar6;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t *plVar7;
  uint64_t local_48;
  uint64_t uStack_40;
  
  this_ptr[1] = 0;
  *this_ptr = 0;
  if ((g_028a0a78 != '\0') && (lVar3 = *(int64_t *)(arg1 + 0x70), lVar3 != 0)) {
    lVar5 = arg1 + 0x70;
    do {
      if (param_2 <= *(int *)(lVar3 + 0x20)) {
        lVar5 = lVar3;
      }
      lVar3 = *(int64_t *)(lVar3 + (uint64_t)(*(int *)(lVar3 + 0x20) < param_2) * 8);
    } while (lVar3 != 0);
    if ((lVar5 != arg1 + 0x70) && (*(int *)(lVar5 + 0x20) <= param_2)) {
      if (*(int64_t **)(lVar5 + 0x28) != (int64_t *)(lVar5 + 0x30)) {
        plVar7 = *(int64_t **)(lVar5 + 0x28);
        do {
          pvVar6 = (void *)(uint64_t)(uint)((int)plVar7[6] - (int)plVar7[5]);
          lVar3 = param_1 + 0xf8;
          FUN_00ab94d4(pvVar6,plVar7[5],param_1 + 0xf8,param_1 + 0x40,1);
          if ((*(int64_t *)(lVar5 + 0x38) == 1) ||
             (iVar2 = _memcmp(pvVar6,(void *)(*(int64_t *)(param_1 + 0x120) -
                                             *(int64_t *)(param_1 + 0x118)),(size_t)lVar3),
             iVar2 == 0)) {
            if (uStack_40 != (int64_t *)0x0) {
              LOCK();
              uStack_40[1] = uStack_40[1] + 1;
              UNLOCK();
            }
            *this_ptr = local_48;
            plVar7 = (int64_t *)this_ptr[1];
            this_ptr[1] = (int64_t)uStack_40;
            if (plVar7 != (int64_t *)0x0) {
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
            if (uStack_40 != (int64_t *)0x0) {
              LOCK();
              plVar7 = uStack_40 + 1;
              lVar3 = *plVar7;
              *plVar7 = *plVar7 + -1;
              UNLOCK();
              if (lVar3 == 0) {
                (**(code **)(*uStack_40 + 0x10))();
                std::__shared_weak_count::__release_weak();
              }
            }
            break;
          }
          if (uStack_40 != (int64_t *)0x0) {
            LOCK();
            plVar1 = uStack_40 + 1;
            lVar3 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar3 == 0) {
              (**(code **)(*uStack_40 + 0x10))();
              std::__shared_weak_count::__release_weak();
            }
          }
          plVar1 = (int64_t *)plVar7[1];
          if ((int64_t *)plVar7[1] == (int64_t *)0x0) {
            plVar4 = (int64_t *)plVar7[2];
            if ((int64_t *)*plVar4 != plVar7) {
              do {
                plVar7 = (int64_t *)plVar7[2];
                plVar4 = (int64_t *)plVar7[2];
              } while ((int64_t *)*plVar4 != plVar7);
            }
          }
          else {
            do {
              plVar4 = plVar1;
              plVar1 = (int64_t *)*plVar4;
            } while ((int64_t *)*plVar4 != (int64_t *)0x0);
          }
          plVar7 = plVar4;
        } while (plVar4 != (int64_t *)(lVar5 + 0x30));
        if (*this_ptr != 0) {
          return this_ptr;
        }
      }
    }
  }
  lVar3 = *(int64_t *)(arg1 + 0x58);
  if (lVar3 != 0) {
    lVar5 = arg1 + 0x58;
    do {
      if (param_2 <= *(int *)(lVar3 + 0x20)) {
        lVar5 = lVar3;
      }
      lVar3 = *(int64_t *)(lVar3 + (uint64_t)(*(int *)(lVar3 + 0x20) < param_2) * 8);
    } while (lVar3 != 0);
    if ((lVar5 != arg1 + 0x58) && (*(int *)(lVar5 + 0x20) <= param_2)) {
      FUN_00ab9774(*(void*)PTR__kSecCodeInfoUnique_024a9988,*(void*)(lVar5 + 0x40),
                   param_1 + 0xf8,param_1 + 0x40);
      plVar7 = (int64_t *)this_ptr[1];
      *(void*)this_ptr = (uint32_t)local_48;
      *(void*)((int64_t)this_ptr + 4) = local_48._4_4_;
      *(void*)(this_ptr + 1) = (uint32_t)uStack_40;
      *(void*)((int64_t)this_ptr + 0xc) = uStack_40._4_4_;
      if (plVar7 != (int64_t *)0x0) {
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
    }
  }
  return this_ptr;
}

