// Function: FUN_01b71c50
// Address: 01b71c50
// Size: 1051 bytes
// Class: GNValue

uint64_t FUN_01b71c50(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  bool bVar1;
  char cVar2;
  uint64_t uVar3;
  void *pvVar4;
  int64_t lVar5;
  int iVar6;
  int64_t *this_ptr;
  uint64_t unaff_R15;
  uint64_t uVar7;
  uint64_t uVar8;
  double dVar9;
  double local_78;
  int64_t local_68;
  char local_60;
  int64_t lVar10;
  int iVar11;
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x978))();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    (**(code **)(*this_ptr + 0x978))();
    (**(code **)(*local_40 + 0xe38))();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 == 0) || (*(int *)(local_68 + 0xc) == 0)) {
      uVar8 = (**(code **)(*this_ptr + 0x978))();
      (**(code **)(*local_40 + 0x9d0))(uVar8,0);
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_68 == 0) goto LAB_01b71ec0;
    }
    uVar7 = CONCAT71((int7)((uint64_t)unaff_R15 >> 8),1);
    if (*(int *)(local_68 + 0xc) == 0) {
      bVar1 = true;
    }
    else {
      cVar2 = (**(code **)(*this_ptr + 0x9a0))();
      lVar5 = *this_ptr;
      if (cVar2 == '\0') {
        (**(code **)(lVar5 + 0x998))();
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x9d0))();
        if (cVar2 != '\0') {
          uVar3 = (**(code **)(*this_ptr + 0x9d8))();
          if (uVar3 >> 0x20 == 0) {
            local_78 = g_0241d9d8;
          }
          else {
            (**(code **)(*this_ptr + 0x978))();
            (**(code **)(*local_40 + 0xa18))();
            pvVar4 = _pthread_getspecific((void*)lVar5);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar8 = (**(code **)(*this_ptr + 0x9d8))();
            local_78 = (double)FUN_016c98e0(uVar8,0);
            if ((local_60 != '\0') && (local_68 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          uVar3 = (**(code **)(*this_ptr + 0x9e0))();
          dVar9 = g_0241d9e0;
          if (uVar3 >> 0x20 != 0) {
            (**(code **)(*this_ptr + 0x978))();
            (**(code **)(*local_40 + 0xa18))();
            pvVar4 = _pthread_getspecific((void*)lVar5);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar8 = (**(code **)(*this_ptr + 0x9e0))();
            dVar9 = (double)FUN_016c98e0(uVar8,0);
            if ((local_60 != '\0') && (local_68 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          iVar6 = 0;
          lVar10 = local_68;
          do {
            if (*(int *)(local_68 + 0xc) <= iVar6) {
              FUN_001159b0();
              bVar1 = false;
              uVar7 = 0;
              goto LAB_01b71eb4;
            }
            iVar11 = iVar6;
            pvVar4 = _pthread_getspecific((void*)lVar5);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar2 = FUN_012754d0(local_78,dVar9 - local_78,param_3,param_4,lVar10,iVar11);
            iVar6 = iVar6 + 1;
          } while (cVar2 == '\0');
          FUN_001159b0();
        }
      }
      bVar1 = false;
    }
LAB_01b71eb4:
    FUN_00d50b20();
    if (!bVar1) goto LAB_01b71ec3;
  }
LAB_01b71ec0:
  uVar7 = 0;
LAB_01b71ec3:
  return uVar7 & 0xffffffff;
}

