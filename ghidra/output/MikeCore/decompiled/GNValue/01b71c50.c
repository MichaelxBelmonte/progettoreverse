// Function: FUN_01b71c50
// Address: 01b71c50
// Size: 1051 bytes
// Class: GNValue


/* WARNING: Removing unreachable block (ram,0x01b71d15) */
/* WARNING: Removing unreachable block (ram,0x01b71d62) */
/* WARNING: Removing unreachable block (ram,0x01b71d67) */
/* WARNING: Removing unreachable block (ram,0x01b71d6f) */
/* WARNING: Removing unreachable block (ram,0x01b71d78) */
/* WARNING: Removing unreachable block (ram,0x01b72059) */
/* WARNING: Removing unreachable block (ram,0x01b72066) */
/* WARNING: Removing unreachable block (ram,0x01b71d1b) */
/* WARNING: Removing unreachable block (ram,0x01b71d20) */
/* WARNING: Removing unreachable block (ram,0x01b71d2b) */
/* WARNING: Removing unreachable block (ram,0x01b71d4b) */
/* WARNING: Removing unreachable block (ram,0x01b71d58) */

ulonglong FUN_01b71c50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  ulonglong uVar3;
  void *pvVar4;
  longlong lVar5;
  int iVar6;
  longlong *unaff_RDI;
  undefined8 unaff_R15;
  ulonglong uVar7;
  undefined8 uVar8;
  double dVar9;
  double local_78;
  longlong local_68;
  char local_60;
  longlong lVar10;
  int iVar11;
  longlong *local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x978))();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    (**(code **)(*unaff_RDI + 0x978))();
    (**(code **)(*local_40 + 0xe38))();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 == 0) || (*(int *)(local_68 + 0xc) == 0)) {
      uVar8 = (**(code **)(*unaff_RDI + 0x978))();
      (**(code **)(*local_40 + 0x9d0))(uVar8,0);
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_68 == 0) goto LAB_01b71ec0;
    }
    uVar7 = CONCAT71((int7)((ulonglong)unaff_R15 >> 8),1);
    if (*(int *)(local_68 + 0xc) == 0) {
      bVar1 = true;
    }
    else {
      cVar2 = (**(code **)(*unaff_RDI + 0x9a0))();
      lVar5 = *unaff_RDI;
      if (cVar2 == '\0') {
        (**(code **)(lVar5 + 0x998))();
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x9d0))();
        if (cVar2 != '\0') {
          uVar3 = (**(code **)(*unaff_RDI + 0x9d8))();
          if (uVar3 >> 0x20 == 0) {
            local_78 = DAT_0241d9d8;
          }
          else {
            (**(code **)(*unaff_RDI + 0x978))();
            (**(code **)(*local_40 + 0xa18))();
            pvVar4 = _pthread_getspecific((pthread_key_t)lVar5);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar8 = (**(code **)(*unaff_RDI + 0x9d8))();
            local_78 = (double)FUN_016c98e0(uVar8,0);
            if ((local_60 != '\0') && (local_68 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          uVar3 = (**(code **)(*unaff_RDI + 0x9e0))();
          dVar9 = DAT_0241d9e0;
          if (uVar3 >> 0x20 != 0) {
            (**(code **)(*unaff_RDI + 0x978))();
            (**(code **)(*local_40 + 0xa18))();
            pvVar4 = _pthread_getspecific((pthread_key_t)lVar5);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar8 = (**(code **)(*unaff_RDI + 0x9e0))();
            dVar9 = (double)FUN_016c98e0(uVar8,0);
            if ((local_60 != '\0') && (local_68 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
            pvVar4 = _pthread_getspecific((pthread_key_t)lVar5);
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


