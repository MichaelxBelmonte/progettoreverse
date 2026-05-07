// Function: FUN_009ce84c
// Address: 009ce84c
// Size: 579 bytes
// Class: Unknown


void FUN_009ce84c(byte param_1,char param_2,char param_3,char param_4)

{
  int *piVar1;
  char cVar2;
  string *this;
  void *pvVar3;
  string *psVar4;
  longlong *unaff_RDI;
  longlong *local_res8;
  string local_c8 [24];
  byte local_b0;
  int local_98;
  int local_90;
  byte local_88;
  int local_70;
  byte local_68;
  undefined7 uStack_67;
  
  do {
    if ((*unaff_RDI == 0) || (*(longlong *)(*unaff_RDI + 0x30) == 0)) {
      return;
    }
    if (((param_1 == 0) || (cVar2 = FUN_009cedd6(), cVar2 == '\0')) &&
       ((local_res8 == (longlong *)0x0 ||
        (cVar2 = (**(code **)(*local_res8 + 0x10))(), cVar2 == '\0')))) {
      FUN_00ac4e90();
      if (local_98 == 3) {
        if (param_2 != '\0') {
          FUN_00ac4f80();
          if (local_90 == 4) {
            if (param_4 == '\0') {
              psVar4 = local_c8;
              FUN_00ac86a0();
              this = (string *)0x0;
              FUN_00ac67c0();
              if (((byte)local_c8[0] & 1) != 0) {
                operator_delete(this);
              }
              std::string::string(this,psVar4);
              std::string::string(this,psVar4);
              cVar2 = FUN_009ce642();
              if ((local_b0 & 1) != 0) {
                operator_delete(this);
              }
              if ((local_88 & 1) != 0) {
                operator_delete(this);
              }
              if ((local_68 & 1) != 0) {
                operator_delete(this);
              }
              if (cVar2 == '\0') goto LAB_009ce9ea;
            }
          }
          else {
LAB_009ce9ea:
            FUN_009cef2a();
            pvVar3 = (void *)(ulonglong)param_1;
            FUN_009ce84c((void *)(ulonglong)param_1,1,param_3,param_4);
            piVar1 = (int *)CONCAT71(uStack_67,local_68);
            if (piVar1 != (int *)0x0) {
              LOCK();
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                FUN_009cef62();
                operator_delete(pvVar3);
              }
            }
          }
        }
      }
      else if ((param_3 == '\0') || (FUN_00ac4f80(), local_70 != 4)) {
        FUN_009ce4c0();
      }
    }
    FUN_00ac59d0();
  } while( true );
}


